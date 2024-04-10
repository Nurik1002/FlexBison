%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include "y.tab.h"
    void yyerror(char *s);		// печатает сообщение об ошибке.
    extern FILE* yyin;			// input file
    extern FILE *yyout;  		/* Pointer to the output file */WWW
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
