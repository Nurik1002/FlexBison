enum{
    TOKEN_ID,
    TOKEN_NUMBER,
};

union YYSTYPE
{
    char *str;
    int num;
};

extern YYSTYPE yylval;

int yyparse();
int yylex();
