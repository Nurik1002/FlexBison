%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
%}

%%

"print"       { return cprint; }
"def"         { return functype; }
"return"      { return freturn; }
"if"          { return cif; }
"elif"        { return celif; }
"else"        { return celse; }
"int"         { return cint; }
"input"       { return cinput; }
"True"        { return ctrue; }
"False"       { return cfalse; }
"and"         { return cand;}
"or"          { return cor; }
"%"           { return percent; }
"=="          { return dqual; }
"!="          { return nequal; }
"<="          { return lessequal; }
"+"           { return plus; }
"="           { return ravno; }
"+="          { return add;  }
"%="	      { return delenie; }
">"           { return less; }


"(" { strcpy(yylval.var, "("); return lparen; }
")" { strcpy(yylval.var, ")"); return rparen; }


["\n" " "] {}
[ : ,] {}

[0-9]+               { strcpy(yylval.var, yytext); return NUM; }
[a-zA-Z][a-zA-Z0-9]* { strcpy(yylval.var, yytext); return IDENTIFIER; }


%%
    
int yywrap(void){
    return 1;
}
