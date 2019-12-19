%{

#include "myh.h"
#include "myhh.h"
#include "myyacc.tab.h"
int flag = 1;
extern int yylineno;

%}


%token<val> NUM
%token<val> BOOLEAN
%token<id_val> ID
%token INT BOOL NUM letter digit
%token IF ELSE WHILE WRITE READ
%token AND OR XOR REL ODD
%type<id_val> id
%left '+' '*'
%left '/' '-'
%right '!'

%%

program : block {};

P	: {
	if(flag){
	gen("int", 0, dx);
	dx = 3;
	flag = 0;
	}	
	};

block	: '{' decls P stmts '}' {};
	
decls : decls decl {}
      | {};

decl : INT id ';' {
     	enter($2, 0, 0);
	}
     | BOOL id ';' {
	enter($2, 1, 0);
	}
	| INT id '[' NUM ']' ';' {
	enter($2, 2, $4);
	}
	| BOOL id '[' NUM ']' ';' {
	enter($2, 3, $4);
	};

id : ID {};

stmts : stmts stmt {}
      | {};

stmt : id '=' expr ';' {
	int i = position($1, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	}
	| WHILE O '('expr')' M stmt{
	gen("jmp", 0, $1.val);
	code[$5.val].a = cx;
	}
	| WRITE expr ';' {
	gen("wrt", 0, 0);
	}
	| READ id ';' {
	gen("rd", 0, 0);
	int i = position($2, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	}
	| block {
	}
	| matched_stmt {}
	| open_stmt {}
	| Elist '=' expr ';'{
	int i = position($1.id_val, level);
	gen("stoarr", level - table[i].l_v, table[i].addr);
	};

M	: {
	$0.val = cx;
	gen("jpc", 0, 0);
	};

N	: {
	$0.val = cx;
	gen("jmp", 0, 0);
	}

O	: {
	$0.val = cx;
	};

if_else_stmt : matched_stmt {}
	     | open_stmt {};

matched_stmt : IF '('expr')' 
	    M matched_stmt N ELSE O matched_stmt {
	code[$4.val].a = $8.val;
	code[$6.val].a = cx;
	}
	| id '=' expr ';' {
	int i = position($1, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	}
	| WHILE O '('expr')' M stmt{
	gen("jmp", 0, $1.val);
	code[$5.val].a = cx;
	}
	| WRITE expr ';' {
	gen("wrt", 0, 0);
	}
	| READ id ';' {}
	| block {}
	| Elist '=' expr ';'{
	int i = position($1.id_val, level);
	gen("stoarr", level - table[i].l_v, table[i].addr);
	};

open_stmt : IF '('expr')' M if_else_stmt {
	code[$4.val].a = cx;
	}
	  | IF '('expr')' M matched_stmt N ELSE O open_stmt {
	code[$4.val].a = $8.val;
	code[$6.val].a = cx;
	};

Elist : id '[' expr ']' {
	$0.val = $3.val;
	strcpy($0.id_val, $1);	
	};

expr : term '+' term {
	gen("opr", 0, 2);
	}
      | term '-' term {
	gen("opr", 0, 3);
	}
	| term {}
	| expr OR term {
	gen("opr", 0, 15);
	}
	| ODD '(' expr ')' {
	gen("opr", 0, 19);
	};

term : factor '*' factor {
	gen("opr", 0, 4);	
	}
      | factor '/' factor {
	gen("opr", 0, 5);
	}
	| factor '%' factor {
	gen("opr", 0, 14);
	}
	| factor {}
	| term AND factor {
	gen("opr", 0, 16);
	}
	| term XOR factor {
	gen("opr", 0, 18);
	};

factor : id {
	int i = position($1, level);
	gen("lod", level - table[i].l_v, table[i].addr);
	}
	| NUM {
	gen("lit", 0, $1);
	}
	| Elist {
	int i = position($1.id_val, level);
	gen("lodarr", level - table[i].l_v, table[i].addr);
	}
	| '(' expr ')' {}
	| BOOLEAN {
	gen("lit", 0, $1);
	}
	| '!' factor {
	gen("opr", 0, 17);
	}
	| rel {};


rel : expr REL expr {
	gen("opr", 0, $2.rel_type);
	};

%%

void yyerror(const char*s)
{
	printf("%s at line %d\n", s, yylineno);
}

int main(int argc, char** argv)
{
	FILE* fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("Cannot open the file!");
		return -1;
	}
	extern FILE* yyin;
	yyin = fp;
	printf("Begin parsing!\n");
	yyparse();
	printf("End parsing!\n");
	fclose(fp);
	printf("----------start writing codes!---------\n");
	gen("opr", 0, 0);
	writeCodes("mycodes.txt");
	printf("------------------Done!----------------\n");
	interpret();

	return 0;
}
