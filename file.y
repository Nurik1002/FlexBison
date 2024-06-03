%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    void yyerror(char *s);      
    extern FILE* yyin;          
    extern FILE *yyout;         
%}

%union{
    int num;
    char var[10];
    char code[1024];
    
}


%token <var> IDENTIFIER NUM  lparen rparen 
%token <code>   functype freturn cif celse dqual nequal percent lessequal cand cor ctrue cfalse plus celif ravno less delenie add cprint cint cinput
%type <code> command list_command function ret_func blockif blockelse expression call_func blockelif operations load blockprint blockmain
%type <code> start

%%

%start start ; 

start: command {fprintf(yyout, $1);};
      
command: list_command {strcpy($$,$1);};
    |list_command command {strcpy($$,$1); strcat($$,$2);};
    
list_command: function { strcpy($$, $1); };
    |call_func {strcpy($$, $1);};
    |operations {strcpy($$, $1);};
    |load {strcpy($$, $1);};
    |blockif {strcpy($$, $1);};
    |blockprint {strcpy($$, $1);};
    |blockelif {strcpy($$, $1);};
    |blockelse {strcpy($$, $1);};
    |ret_func { strcpy($$, $1); };
    |blockmain { strcpy($$, $1); };


function: functype IDENTIFIER lparen IDENTIFIER rparen { strcpy($$, "bool"); strcat($$, " "); strcat($$, $2); strcat($$, $3); strcat($$, "int "); strcat($$, $4); strcat($$, $5); strcat($$, "\n{\n"); };
    |functype IDENTIFIER lparen IDENTIFIER IDENTIFIER rparen { strcpy($$, "}\nbool"); strcat($$, " "); strcat($$, $2); strcat($$, $3); strcat($$, " int "); strcat($$, $4); strcat($$, ", int  "); strcat($$, $5); strcat($$, $6); strcat($$, "\n{\n"); };
    |functype IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen { strcpy($$, "}\nvoid"); strcat($$, " "); strcat($$, $2); strcat($$, $3); strcat($$, " int "); strcat($$, $4); strcat($$, ", int "); strcat($$, $5);  strcat($$, ", int "); strcat($$, $6);  strcat($$, $7); strcat($$, "\n{\n"); };

call_func: IDENTIFIER ravno IDENTIFIER lparen IDENTIFIER rparen { strcpy($$, "bool "); strcat($$, $1); strcat($$, " = "); strcat($$, $3); strcat($$, "("); strcat($$, $5); strcat($$, ");\n"); };
	|IDENTIFIER ravno IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen { strcpy($$, "bool "); strcat($$, $1); strcat($$, " = "); strcat($$, $3); strcat($$, "("); strcat($$, $5); strcat($$, ", "); strcat($$, $6); strcat($$, ", "); strcat($$, $7);  strcat($$, ");\n"); }


blockif: cif expression { strcpy($$,"if ("); strcat($$,$2); strcat($$,"){\n"); };
	|cif IDENTIFIER {  strcpy($$,"if ("); strcat($$,$2); strcat($$,"){\n"); };

blockelif: celif expression { strcpy($$,"}\nelif ("); strcat($$,$2); strcat($$,"){\n"); };

expression:
    IDENTIFIER percent NUM dqual NUM      { strcpy($$," "); strcat($$,$1); strcat($$, " % "); strcat($$,$3); strcat($$, " == "); strcat($$,$5); };
    | IDENTIFIER less NUM { strcpy($$, $1); strcat($$, ">"); strcat($$, $3); };
    | IDENTIFIER less  NUM  plus IDENTIFIER { strcpy($$, $1); strcat($$, ">"); strcat($$, $3); strcat($$, "+"); strcat($$, $5); };
    | IDENTIFIER percent NUM nequal NUM     { strcpy($$," "); strcat($$,$1); strcat($$, " % "); strcat($$,$3); strcat($$, " != "); strcat($$,$5); };
    | IDENTIFIER lessequal NUM           { strcpy($$," "); strcat($$,$1); strcat($$, " <= "); strcat($$,$3); };
    | IDENTIFIER dqual NUM              { strcpy($$," "); strcat($$,$1); strcat($$, " == "); strcat($$,$3); };
    | NUM lessequal IDENTIFIER lessequal NUM { strcpy($$, $1); strcat($$, " <= "); strcat($$, $3); strcat($$, " <= "); strcat($$,$5); };
    | expression cand expression        { strcpy($$," "); strcat($$,$1); strcat($$, " && "); strcat($$,$3); } ;
    | expression cor expression         { strcpy($$," "); strcat($$,$1); strcat($$, " || "); strcat($$,$3); } ;

blockelse: celse {strcpy($$,"else \n{\n");};


load: IDENTIFIER ravno NUM { strcpy($$, $1); strcat($$, " = "); strcat($$, $3); strcat($$, ";\n");};

blockprint: cprint lparen NUM rparen { strcpy($$, "cout << "); strcat($$, $3); strcat($$, ";\n}\n}\nint main()\n{\n");}
	|cprint lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen { strcpy($$, "cout << "); strcat($$, $3); strcat($$, " << '.' << "); strcat($$, $4); strcat($$, " << '.' << "); strcat($$, $5); strcat($$, ";\n}\n");}


operations: IDENTIFIER add NUM { strcpy($$, $1); strcat($$, "+="); strcat($$, $3); strcat($$, "; ");};
	|IDENTIFIER delenie NUM { strcpy($$, $1); strcat($$, "%="); strcat($$, $3);  strcat($$, ";\n ");};
	|IDENTIFIER delenie lparen NUM plus IDENTIFIER rparen { strcpy($$, $1); strcat($$, "%=");  strcat($$, "("); strcat($$, $4); strcat($$, "+"); strcat($$, $6); strcat($$, ")"); strcat($$, "; \n");};


ret_func: freturn IDENTIFIER { strcpy($$, "\treturn"); strcat($$, " "); strcat($$, $2);  strcat($$, ";\n}\n"); };
	|freturn ctrue { strcpy($$, "\treturn"); strcat($$, " "); strcat($$, "true");  strcat($$, ";\n}\n"); };
	|freturn cfalse { strcpy($$, "\treturn"); strcat($$, " "); strcat($$, "false");  strcat($$, ";\n}\n"); };
	|freturn NUM lessequal IDENTIFIER lessequal NUM { strcpy($$, "return "); strcat($$, $2); strcat($$, "<="); strcat($$, $4); strcat($$, "<="); strcat($$, $6); strcat($$, ";\n}\n");  };
	|freturn NUM lessequal IDENTIFIER lessequal NUM plus IDENTIFIER { strcpy($$, "\treturn "); strcat($$, $2); strcat($$, " <= "); strcat($$, $4);strcat($$, " <= "); strcat($$, $6); strcat($$, " + "); strcat($$, $8); strcat($$, ";\n"); };
    

blockmain: IDENTIFIER ravno 	cint lparen cinput lparen rparen rparen { strcpy($$, "\tint ");  strcat($$, $1), strcat($$, ";\n");    strcat($$, "\tcin >> "); strcat($$, $1); strcat($$, ";\n");};
	|IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen { strcpy($$, $1); strcat($$, "("); strcat($$, $3); strcat($$, ", ");  strcat($$, $4); strcat($$, ", ");  strcat($$, $5); strcat($$, ");\n"); strcat($$, "return 0;\n");};

%%



int main(void)
{
    yyin = fopen("input.txt","r");
    yyout = fopen("output.txt","w");
    fprintf(yyout, "#include <stdio.h> \n#include <stdlib.h>\ninclude <iostream> \n\n");
    yyparse();
    fprintf(yyout, "}");
    fclose(yyin);
    fclose(yyout);
    return 0;
}

void yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
