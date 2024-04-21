%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include "y.tab.h"
    void yyerror(char *s);		// печатает сообщение об ошибке.
    extern FILE* yyin;			// input file
    extern FILE *yyout;  		// Pointer to the output file 
%}

%union{
    int num;
    char var[10]
    char let[1024];
    char yylval[1024];
}

%token <var> id
%token <var> num
%token <var> let
%type <code> COMMAND LIST_COMMAND INIT LIST_INIT 
%type <code> VAL EXP ASSIGN 
%token DEF INT IF ELSE ELIF  STR AND OR NOT INPUT PRINT
%token <code> assignment SIGN

%start mainroot

mainroot: declaration {strcpy($$,$1);}
    |init {strcpy($$,$1);}

 declaration: LET INT {strcpy($$,$1);strcat($$,$2);}
 init:  INT LET NUM {strcpy($$,$1);strcat($$,$2);strcat($$,"=");strcat($$,$3);strcat($$,";");}
low_term:INT LET LET SIGN LET {strcpy($$,$1); strcat($$,$2);strcat($$,"=");strcpy($$,$1); strcpy($$,$4); strcpy($$,$1)strcat($$,";");}

cicle: IF INT LET SIGN NUM AND LET NUM NUM OR LET NUM NUM AND LET NUM NUM
    |IF INT NUM SIGN LET SIGN NUM
    | IF LET SIGN NUM