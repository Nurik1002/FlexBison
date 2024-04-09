%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.y"
enum {
    DEF, INT, IF, ELIF, ELSE, TRUE, FALSE, STR, AND, OR, INPUT, PRINT,
    IDENTIFIER, LET, NUM, SIGNS
};
%}

%%

"def"     { return DEF;     }
"int"     { return INT;     }
"if"      { return IF;      }
"elif"    { return ELIF;    }
"else"    { return ELSE;    }
"True"    { return TRUE;    }
"False"   { return FALSE;   }
"str"     { return STR;     }
"and"     { return AND;     }
"or"      { return OR;      }
"input"   { return INPUT;   }
"print"   { return PRINT;   }


[a-z]+     { strcpy(yylval.data, yytext); return LET;       }
[0-9]+     { strcpy(yylval.data , yytext); return NUM;       }
[ * \ / + - % < > ! =< =! => ]  { strcpy(yylval.str, yytext); return SIGNS;     }

%%

int yywrap(void){
    return 1;
}