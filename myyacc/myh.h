#ifndef MAIN_HPP  
#define MAIN_HPP  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct table
{
    char id_name[30];
    int kind;
    int l_v;
    int addr;
}TABLE;

typedef struct code
{
    char func_name[10];
    int l;
    int a;
}CODE;

typedef struct arrays
{
    int size;
    int kind;
    int* start;
}ARRAYS;


int ax = 0; //index of ARRAYS table
int cx = 0; //index of CODE table
int tx = 0; //index of TABLE table
int level = -1;
int dx = 3; 
CODE code[500] = {};
TABLE table[100] = {};
ARRAYS arrays[100] = {};
int s[5555] = {}; //runtime stack

void gen(const char* sym, int l, int a)
{
    memset(code[cx].func_name, 0, sizeof(char)*10);
    strcpy(code[cx].func_name, sym);
    code[cx].l = l;
    code[cx++].a = a;
}


void enter(char* id_name, int kind, int size) //kind 0 is int, 1 is bool, 2 is int[], 3 is bool[], size is used for arrays
{
    strcpy(table[tx].id_name, id_name);
    table[tx].kind = kind;
    table[tx].l_v = level;
    if(kind < 2)
    	table[tx].addr = dx;
    else{
	arrays[ax].size = size;
	arrays[ax].kind = kind;
	arrays[ax].start = (int*)malloc(size*sizeof(int));
	table[tx].l_v = level;
    	table[tx].addr = ax++;
    }
    ++dx;
    ++tx;
}


int position(char* id_name, int level) //Returning 0 indicates failure
{
    int i = tx;
    while(strcmp(id_name, table[i].id_name) && i > 0) --i; //try one try
    return i;
}

int base(int l, int b)
{
	while(l > 0){
		b = s[b];
		--l;
	}
	return b;
}

void error(int n)
{
    printf("Error number:%d\n", n);
}

void writeCodes(const char* filename)
{
    FILE* fp;
    if((fp = fopen(filename, "w")) == NULL)
	    printf("Cannot write to file!\n");
    else{
    	int i;
	for(i=0; i<cx; ++i)
		fprintf(fp, "%d:  %s %d %d\n", i, code[i].func_name, code[i].l, code[i].a);
    }
    fclose(fp);
}

void interpret()
{
    printf("Begin interpreting!\n");
	int l, a;
	int p = 0, t = -1, b = 0;
	char f[10];
	s[0] = 0;
	s[1] = 0;
	s[2] = 0;
    do{		
		memset(f, 0, 10*sizeof(char));
		strcpy(f, code[p].func_name);
		l = code[p].l;
		a = code[p].a;
		++p;
		if(!strcmp(f, "lit")){
			++t;
			s[t] = a;
		}
		else if(!strcmp(f, "opr")){
			switch(a){
				case 0:
					t = b - 1;
					p = s[t + 3];
					b = s[t + 2];
					break;
				case 1:
					s[t] = -s[t];
					break;
				case 2:
					--t;
					s[t] += s[t+1];
					break;
				case 3:
					--t;
					s[t] -= s[t+1];
					break;
				case 4:
					--t;
					s[t] *= s[t+1];
					break;
				case 5:
					--t;
					s[t] /= s[t+1];
					break;
				case 6:
					break;
				case 7:
					break;
				case 8:
					--t;
					s[t] = s[t] == s[t+1] ? 1 : 0;
					break;
				case 9:
					--t;
					s[t] = s[t] != s[t+1] ? 1 : 0;
					break;
				case 10:
					--t;
					s[t] = s[t] < s[t+1] ? 1 : 0;
					break;
				case 11:
					--t;
					s[t] = s[t] >= s[t+1] ? 1 : 0;
					break;
				case 12:
					--t;
					s[t] = s[t] > s[t+1] ? 1 : 0;
					break;
				case 13:
					--t;
					s[t] = s[t] <= s[t+1] ? 1 : 0;
					break;
				case 14: //求余
					--t;
					s[t] = s[t] % s[t+1];
					break;
				case 15: //或
					--t;
					s[t] = s[t] || s[t+1];
					break;
				case 16: //和
					--t;
					s[t] = s[t] && s[t+1];
					break;
				case 17:
					s[t] = !s[t];
					break;
				case 18:
					--t;
					s[t] = s[t]^s[t+1];
					break;
				case 19:
					s[t] = s[t]%2 == 1 ? 1 : 0;
					break;
			}
		}
		else if(!strcmp(f, "lod")){
			++t;
			s[t] = s[base(l, b) + a];
		}
		else if(!strcmp(f, "sto")){
			s[base(l, b) + a] = s[t];
			--t;
		}
		else if(!strcmp(f, "int")){
			t += a;
		}
		else if(!strcmp(f, "jmp")){
			p = a;
		}
		else if(!strcmp(f, "jpc")){
			if(!s[t]){
				p = a;
			}
			--t;
		}
		else if(!strcmp(f, "lodarr")){
			s[t] =  arrays[a].start[s[t]];
		}
		else if(!strcmp(f, "stoarr")){
			--t;
			arrays[a].start[s[t]] = s[t+1];
		}	
		else if(!strcmp(f, "wrt")){
			printf("%d\n", s[t]);
			--t;
		}
		else if(!strcmp(f, "rd")){
			int k;
			printf("Enter: ");
			scanf("%d", &k);
			++t;
			s[t] = k;
		}
    }while(p != 0);
	printf("End interpreting!\n");
}


#endif
