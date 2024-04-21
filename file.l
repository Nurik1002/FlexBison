%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.y"
#include "y.tab.h"

enum {
    DEF, INT, IF, ELIF, ELSE, TRUE, FALSE, STR, AND, OR, INPUT, PRINT,
    IDENTIFIER, LET, NUM, SIGNS
};
%}

%%


"print"   { return PRINT;   }


[a-z]+     { strcpy(yylval.data, yytext); return LET;       }
[0-9]+     { strcpy(yylval.data , yytext); return NUM;       }
[ * \ / + - % < > ! =< =! => ]  { strcpy(yylval.str, yytext); return SIGNS;     }

%%

int yywrap(void){
    return 1;
}