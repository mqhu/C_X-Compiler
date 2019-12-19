%option yylineno
%{
#include "myhh.h"
#include "myyacc.tab.h"

extern int level;

%}

%x COMMENT

letter	([a-zA-Z])
digit	([0-9])
id	({letter}[a-zA-Z0-9]*)
err_num	({digit}+{id})
num	([1-9]{digit}*|0)
delim	([ \t\n]+)

%%

int	{return INT;}
bool	{return BOOL;}
true	{
	yylval.val = 1;
	yylval.val_type = 1;
	return BOOLEAN;
	}
false	{
	yylval.val = 0;
	yylval.val_type = 1;
	return BOOLEAN;
	}
if	{return IF;}
else	{return ELSE;}
while	{return WHILE;}
write	{return WRITE;}
read	{return READ;}
ODD	{return ODD;}
{id}	{
	strcpy(yylval.id_val, yytext);
	return ID;
	}
{err_num}	{}
{num}	{
	yylval.val = atoi(yytext);
	yylval.val_type = 0;
	return NUM;
	}
"/*"	{
	BEGIN COMMENT;
	}
<COMMENT>"*/"	{
	BEGIN INITIAL;
	}
"{"	{++level; return '{';}
"}"	{--level; return '}';}
";"	{return ';';}
"<="	{
	yylval.rel_type = 13;
	return REL;
	}
"<"	{
	yylval.rel_type = 10;
	return REL;
	}
">="	{
	yylval.rel_type = 11;
	return REL;
	}
">"	{
	yylval.rel_type = 12;
	return REL;
	}
"=="	{
	yylval.rel_type = 8;
	return REL;
	}
"!="	{
	yylval.rel_type = 9;
	return REL;
	}
"!"	{return '!';}
"^"	{return XOR;}
"="	{return '=';}
"("	{return '(';}
")"	{return ')';}
"+"	{return '+';}
"-"	{return '-';}
"*"	{return '*';}
"/"	{return '/';}
"%"	{return '%';}
"["	{return '[';}
"]"	{return ']';}
{delim}	{}
"&&"	{return AND;}
"||"	{return OR;}
.	{}
<COMMENT>.	{}

%%

int yywrap(void)  
{  
    puts("-----the file is end");  
    return 1;//返回1表示读取全部结束。如果要接着读其它文件，可以这里fopen该文件，
             //文件指针赋给yyin，并返回0  
}
