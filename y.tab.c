/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "file.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    void yyerror(char *s);      
    extern FILE* yyin;          
    extern FILE *yyout;         

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUM = 259,                     /* NUM  */
    lparen = 260,                  /* lparen  */
    rparen = 261,                  /* rparen  */
    functype = 262,                /* functype  */
    freturn = 263,                 /* freturn  */
    cif = 264,                     /* cif  */
    celse = 265,                   /* celse  */
    dqual = 266,                   /* dqual  */
    nequal = 267,                  /* nequal  */
    percent = 268,                 /* percent  */
    lessequal = 269,               /* lessequal  */
    cand = 270,                    /* cand  */
    cor = 271,                     /* cor  */
    ctrue = 272,                   /* ctrue  */
    cfalse = 273,                  /* cfalse  */
    plus = 274,                    /* plus  */
    celif = 275,                   /* celif  */
    ravno = 276,                   /* ravno  */
    less = 277,                    /* less  */
    delenie = 278,                 /* delenie  */
    add = 279,                     /* add  */
    cprint = 280,                  /* cprint  */
    cint = 281,                    /* cint  */
    cinput = 282                   /* cinput  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define NUM 259
#define lparen 260
#define rparen 261
#define functype 262
#define freturn 263
#define cif 264
#define celse 265
#define dqual 266
#define nequal 267
#define percent 268
#define lessequal 269
#define cand 270
#define cor 271
#define ctrue 272
#define cfalse 273
#define plus 274
#define celif 275
#define ravno 276
#define less 277
#define delenie 278
#define add 279
#define cprint 280
#define cint 281
#define cinput 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "file.y"

    int num;
    char var[10];
    char code[1024];
    

#line 194 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_lparen = 5,                     /* lparen  */
  YYSYMBOL_rparen = 6,                     /* rparen  */
  YYSYMBOL_functype = 7,                   /* functype  */
  YYSYMBOL_freturn = 8,                    /* freturn  */
  YYSYMBOL_cif = 9,                        /* cif  */
  YYSYMBOL_celse = 10,                     /* celse  */
  YYSYMBOL_dqual = 11,                     /* dqual  */
  YYSYMBOL_nequal = 12,                    /* nequal  */
  YYSYMBOL_percent = 13,                   /* percent  */
  YYSYMBOL_lessequal = 14,                 /* lessequal  */
  YYSYMBOL_cand = 15,                      /* cand  */
  YYSYMBOL_cor = 16,                       /* cor  */
  YYSYMBOL_ctrue = 17,                     /* ctrue  */
  YYSYMBOL_cfalse = 18,                    /* cfalse  */
  YYSYMBOL_plus = 19,                      /* plus  */
  YYSYMBOL_celif = 20,                     /* celif  */
  YYSYMBOL_ravno = 21,                     /* ravno  */
  YYSYMBOL_less = 22,                      /* less  */
  YYSYMBOL_delenie = 23,                   /* delenie  */
  YYSYMBOL_add = 24,                       /* add  */
  YYSYMBOL_cprint = 25,                    /* cprint  */
  YYSYMBOL_cint = 26,                      /* cint  */
  YYSYMBOL_cinput = 27,                    /* cinput  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_start = 29,                     /* start  */
  YYSYMBOL_command = 30,                   /* command  */
  YYSYMBOL_list_command = 31,              /* list_command  */
  YYSYMBOL_function = 32,                  /* function  */
  YYSYMBOL_call_func = 33,                 /* call_func  */
  YYSYMBOL_blockif = 34,                   /* blockif  */
  YYSYMBOL_blockelif = 35,                 /* blockelif  */
  YYSYMBOL_expression = 36,                /* expression  */
  YYSYMBOL_blockelse = 37,                 /* blockelse  */
  YYSYMBOL_load = 38,                      /* load  */
  YYSYMBOL_blockprint = 39,                /* blockprint  */
  YYSYMBOL_operations = 40,                /* operations  */
  YYSYMBOL_ret_func = 41,                  /* ret_func  */
  YYSYMBOL_blockmain = 42                  /* blockmain  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   92

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    27,    27,    29,    30,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    44,    45,    46,    48,    49,
      52,    53,    55,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    68,    71,    73,    74,    77,    78,    79,    82,
      83,    84,    85,    86,    89,    90
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUM",
  "lparen", "rparen", "functype", "freturn", "cif", "celse", "dqual",
  "nequal", "percent", "lessequal", "cand", "cor", "ctrue", "cfalse",
  "plus", "celif", "ravno", "less", "delenie", "add", "cprint", "cint",
  "cinput", "$accept", "start", "command", "list_command", "function",
  "call_func", "blockif", "blockelif", "expression", "blockelse", "load",
  "blockprint", "operations", "ret_func", "blockmain", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-7)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       0,     6,     3,     1,    18,    -7,    32,    21,    23,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    25,    -2,    33,    28,    36,    -7,    31,    -7,    -7,
      20,    38,    24,    20,    24,    40,    -7,    -7,    47,    46,
      -7,    48,    -7,    50,    -7,    52,    53,    54,    55,    56,
      57,    59,    32,    32,    60,    51,    61,    62,    39,    49,
       9,    58,    -7,    37,    -7,    63,    64,    24,    24,    66,
      -7,    65,    10,    68,    67,    11,    -7,    70,    71,    72,
      74,    75,    77,    -7,    78,    -7,    79,    80,    81,    -7,
      69,    -7,    -7,    -7,    -7,    -7,    83,    84,    -7,    -7,
      88,    -7,    -7,    -7
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    32,     0,     0,     0,     2,
       3,     5,     6,     9,    11,    12,     8,    10,     7,    13,
      14,     0,     0,     0,     0,     0,    39,     0,    40,    41,
      21,     0,    20,     0,    22,     0,     1,     4,     0,     0,
      33,     0,    37,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    27,    24,     0,    30,    31,     0,
      34,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,    45,     0,    18,     0,     0,     0,    16,
      42,    23,    26,    25,    29,    35,     0,     0,    38,    17,
       0,    19,    44,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -7,    -7,    82,    -7,    -7,    -7,    -7,    -7,    -6,    -7,
      -7,    -7,    -7,    -7,    -7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    32,    15,
      16,    17,    18,    19,    20
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    39,    40,     1,    26,    27,    25,     2,     3,     4,
       5,    21,    75,    84,    88,    76,    85,    89,    28,    29,
       6,    30,    31,    36,    41,     7,    35,    22,    38,    23,
      24,    47,    44,    48,    49,    33,    31,    42,    43,    52,
      53,    45,    50,    54,    55,    46,    67,    68,    78,    79,
      56,    57,    51,    58,    59,    60,    61,    70,    62,    63,
      64,    65,    66,    69,    71,    72,    73,     0,    74,    82,
      87,    83,    77,    86,    90,    91,    92,    93,    81,    94,
       0,    96,    80,    95,     0,    97,    98,    99,   100,   101,
     102,   103,    37
};

static const yytype_int8 yycheck[] =
{
       6,     3,     4,     3,     3,     4,     3,     7,     8,     9,
      10,     5,     3,     3,     3,     6,     6,     6,    17,    18,
      20,     3,     4,     0,    26,    25,     5,    21,     3,    23,
      24,    11,     4,    13,    14,     3,     4,     4,     5,    15,
      16,     5,    22,     3,     4,    14,    52,    53,    11,    12,
       3,     5,    14,     5,     4,     3,     3,     6,     4,     4,
       4,     4,     3,     3,     3,     3,    27,    -1,    19,     3,
       3,     6,    14,     5,     4,     4,     4,     3,    14,     4,
      -1,     3,    19,     6,    -1,     6,     6,     6,    19,     6,
       6,     3,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    20,    25,    29,    30,
      31,    32,    33,    34,    35,    37,    38,    39,    40,    41,
      42,     5,    21,    23,    24,     3,     3,     4,    17,    18,
       3,     4,    36,     3,    36,     5,     0,    30,     3,     3,
       4,    26,     4,     5,     4,     5,    14,    11,    13,    14,
      22,    14,    15,    16,     3,     4,     3,     5,     5,     4,
       3,     3,     4,     4,     4,     4,     3,    36,    36,     3,
       6,     3,     3,    27,    19,     3,     6,    14,    11,    12,
      19,    14,     3,     6,     3,     6,     5,     3,     3,     6,
       4,     4,     4,     3,     4,     6,     3,     6,     6,     6,
      19,     6,     6,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    32,    32,    32,    33,    33,
      34,    34,    35,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    37,    38,    39,    39,    40,    40,    40,    41,
      41,    41,    41,    41,    42,    42
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     6,     7,     6,     8,
       2,     2,     2,     5,     3,     5,     5,     3,     3,     5,
       3,     3,     1,     3,     4,     6,     3,     3,     7,     2,
       2,     2,     6,     8,     8,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: command  */
#line 27 "file.y"
               {fprintf(yyout, (yyvsp[0].code));}
#line 1271 "y.tab.c"
    break;

  case 3: /* command: list_command  */
#line 29 "file.y"
                      {strcpy((yyval.code),(yyvsp[0].code));}
#line 1277 "y.tab.c"
    break;

  case 4: /* command: list_command command  */
#line 30 "file.y"
                          {strcpy((yyval.code),(yyvsp[-1].code)); strcat((yyval.code),(yyvsp[0].code));}
#line 1283 "y.tab.c"
    break;

  case 5: /* list_command: function  */
#line 32 "file.y"
                       { strcpy((yyval.code), (yyvsp[0].code)); }
#line 1289 "y.tab.c"
    break;

  case 6: /* list_command: call_func  */
#line 33 "file.y"
               {strcpy((yyval.code), (yyvsp[0].code));}
#line 1295 "y.tab.c"
    break;

  case 7: /* list_command: operations  */
#line 34 "file.y"
                {strcpy((yyval.code), (yyvsp[0].code));}
#line 1301 "y.tab.c"
    break;

  case 8: /* list_command: load  */
#line 35 "file.y"
          {strcpy((yyval.code), (yyvsp[0].code));}
#line 1307 "y.tab.c"
    break;

  case 9: /* list_command: blockif  */
#line 36 "file.y"
             {strcpy((yyval.code), (yyvsp[0].code));}
#line 1313 "y.tab.c"
    break;

  case 10: /* list_command: blockprint  */
#line 37 "file.y"
                {strcpy((yyval.code), (yyvsp[0].code));}
#line 1319 "y.tab.c"
    break;

  case 11: /* list_command: blockelif  */
#line 38 "file.y"
               {strcpy((yyval.code), (yyvsp[0].code));}
#line 1325 "y.tab.c"
    break;

  case 12: /* list_command: blockelse  */
#line 39 "file.y"
               {strcpy((yyval.code), (yyvsp[0].code));}
#line 1331 "y.tab.c"
    break;

  case 13: /* list_command: ret_func  */
#line 40 "file.y"
              { strcpy((yyval.code), (yyvsp[0].code)); }
#line 1337 "y.tab.c"
    break;

  case 14: /* list_command: blockmain  */
#line 41 "file.y"
               { strcpy((yyval.code), (yyvsp[0].code)); }
#line 1343 "y.tab.c"
    break;

  case 15: /* function: functype IDENTIFIER lparen IDENTIFIER rparen  */
#line 44 "file.y"
                                                       { strcpy((yyval.code), "bool"); strcat((yyval.code), " "); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), "int "); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), "\n{\n"); }
#line 1349 "y.tab.c"
    break;

  case 16: /* function: functype IDENTIFIER lparen IDENTIFIER IDENTIFIER rparen  */
#line 45 "file.y"
                                                             { strcpy((yyval.code), "}\nbool"); strcat((yyval.code), " "); strcat((yyval.code), (yyvsp[-4].var)); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), " int "); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), ", int  "); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), "\n{\n"); }
#line 1355 "y.tab.c"
    break;

  case 17: /* function: functype IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen  */
#line 46 "file.y"
                                                                        { strcpy((yyval.code), "}\nvoid"); strcat((yyval.code), " "); strcat((yyval.code), (yyvsp[-5].var)); strcat((yyval.code), (yyvsp[-4].var)); strcat((yyval.code), " int "); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), ", int "); strcat((yyval.code), (yyvsp[-2].var));  strcat((yyval.code), ", int "); strcat((yyval.code), (yyvsp[-1].var));  strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), "\n{\n"); }
#line 1361 "y.tab.c"
    break;

  case 18: /* call_func: IDENTIFIER ravno IDENTIFIER lparen IDENTIFIER rparen  */
#line 48 "file.y"
                                                                { strcpy((yyval.code), "bool "); strcat((yyval.code), (yyvsp[-5].var)); strcat((yyval.code), " = "); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), "("); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), ");\n"); }
#line 1367 "y.tab.c"
    break;

  case 19: /* call_func: IDENTIFIER ravno IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen  */
#line 49 "file.y"
                                                                                    { strcpy((yyval.code), "bool "); strcat((yyval.code), (yyvsp[-7].var)); strcat((yyval.code), " = "); strcat((yyval.code), (yyvsp[-5].var)); strcat((yyval.code), "("); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), ", "); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), ", "); strcat((yyval.code), (yyvsp[-1].var));  strcat((yyval.code), ");\n"); }
#line 1373 "y.tab.c"
    break;

  case 20: /* blockif: cif expression  */
#line 52 "file.y"
                        { strcpy((yyval.code),"if ("); strcat((yyval.code),(yyvsp[0].code)); strcat((yyval.code),"){\n"); }
#line 1379 "y.tab.c"
    break;

  case 21: /* blockif: cif IDENTIFIER  */
#line 53 "file.y"
                        {  strcpy((yyval.code),"if ("); strcat((yyval.code),(yyvsp[0].var)); strcat((yyval.code),"){\n"); }
#line 1385 "y.tab.c"
    break;

  case 22: /* blockelif: celif expression  */
#line 55 "file.y"
                            { strcpy((yyval.code),"}\nelif ("); strcat((yyval.code),(yyvsp[0].code)); strcat((yyval.code),"){\n"); }
#line 1391 "y.tab.c"
    break;

  case 23: /* expression: IDENTIFIER percent NUM dqual NUM  */
#line 58 "file.y"
                                          { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-4].var)); strcat((yyval.code), " % "); strcat((yyval.code),(yyvsp[-2].var)); strcat((yyval.code), " == "); strcat((yyval.code),(yyvsp[0].var)); }
#line 1397 "y.tab.c"
    break;

  case 24: /* expression: IDENTIFIER less NUM  */
#line 59 "file.y"
                          { strcpy((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), ">"); strcat((yyval.code), (yyvsp[0].var)); }
#line 1403 "y.tab.c"
    break;

  case 25: /* expression: IDENTIFIER less NUM plus IDENTIFIER  */
#line 60 "file.y"
                                            { strcpy((yyval.code), (yyvsp[-4].var)); strcat((yyval.code), ">"); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), "+"); strcat((yyval.code), (yyvsp[0].var)); }
#line 1409 "y.tab.c"
    break;

  case 26: /* expression: IDENTIFIER percent NUM nequal NUM  */
#line 61 "file.y"
                                            { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-4].var)); strcat((yyval.code), " % "); strcat((yyval.code),(yyvsp[-2].var)); strcat((yyval.code), " != "); strcat((yyval.code),(yyvsp[0].var)); }
#line 1415 "y.tab.c"
    break;

  case 27: /* expression: IDENTIFIER lessequal NUM  */
#line 62 "file.y"
                                         { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-2].var)); strcat((yyval.code), " <= "); strcat((yyval.code),(yyvsp[0].var)); }
#line 1421 "y.tab.c"
    break;

  case 28: /* expression: IDENTIFIER dqual NUM  */
#line 63 "file.y"
                                        { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-2].var)); strcat((yyval.code), " == "); strcat((yyval.code),(yyvsp[0].var)); }
#line 1427 "y.tab.c"
    break;

  case 29: /* expression: NUM lessequal IDENTIFIER lessequal NUM  */
#line 64 "file.y"
                                             { strcpy((yyval.code), (yyvsp[-4].var)); strcat((yyval.code), " <= "); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), " <= "); strcat((yyval.code),(yyvsp[0].var)); }
#line 1433 "y.tab.c"
    break;

  case 30: /* expression: expression cand expression  */
#line 65 "file.y"
                                        { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-2].code)); strcat((yyval.code), " && "); strcat((yyval.code),(yyvsp[0].code)); }
#line 1439 "y.tab.c"
    break;

  case 31: /* expression: expression cor expression  */
#line 66 "file.y"
                                        { strcpy((yyval.code)," "); strcat((yyval.code),(yyvsp[-2].code)); strcat((yyval.code), " || "); strcat((yyval.code),(yyvsp[0].code)); }
#line 1445 "y.tab.c"
    break;

  case 32: /* blockelse: celse  */
#line 68 "file.y"
                 {strcpy((yyval.code),"else \n{\n");}
#line 1451 "y.tab.c"
    break;

  case 33: /* load: IDENTIFIER ravno NUM  */
#line 71 "file.y"
                           { strcpy((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), " = "); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), ";\n");}
#line 1457 "y.tab.c"
    break;

  case 34: /* blockprint: cprint lparen NUM rparen  */
#line 73 "file.y"
                                     { strcpy((yyval.code), "cout << "); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), ";\n}\n}\nint main()\n{\n");}
#line 1463 "y.tab.c"
    break;

  case 35: /* blockprint: cprint lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen  */
#line 74 "file.y"
                                                               { strcpy((yyval.code), "cout << "); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), " << '.' << "); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), " << '.' << "); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), ";\n}\n");}
#line 1469 "y.tab.c"
    break;

  case 36: /* operations: IDENTIFIER add NUM  */
#line 77 "file.y"
                               { strcpy((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), "+="); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), "; ");}
#line 1475 "y.tab.c"
    break;

  case 37: /* operations: IDENTIFIER delenie NUM  */
#line 78 "file.y"
                                { strcpy((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), "%="); strcat((yyval.code), (yyvsp[0].var));  strcat((yyval.code), ";\n ");}
#line 1481 "y.tab.c"
    break;

  case 38: /* operations: IDENTIFIER delenie lparen NUM plus IDENTIFIER rparen  */
#line 79 "file.y"
                                                              { strcpy((yyval.code), (yyvsp[-6].var)); strcat((yyval.code), "%=");  strcat((yyval.code), "("); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), "+"); strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), ")"); strcat((yyval.code), "; \n");}
#line 1487 "y.tab.c"
    break;

  case 39: /* ret_func: freturn IDENTIFIER  */
#line 82 "file.y"
                             { strcpy((yyval.code), "\treturn"); strcat((yyval.code), " "); strcat((yyval.code), (yyvsp[0].var));  strcat((yyval.code), ";\n}\n"); }
#line 1493 "y.tab.c"
    break;

  case 40: /* ret_func: freturn ctrue  */
#line 83 "file.y"
                       { strcpy((yyval.code), "\treturn"); strcat((yyval.code), " "); strcat((yyval.code), "true");  strcat((yyval.code), ";\n}\n"); }
#line 1499 "y.tab.c"
    break;

  case 41: /* ret_func: freturn cfalse  */
#line 84 "file.y"
                        { strcpy((yyval.code), "\treturn"); strcat((yyval.code), " "); strcat((yyval.code), "false");  strcat((yyval.code), ";\n}\n"); }
#line 1505 "y.tab.c"
    break;

  case 42: /* ret_func: freturn NUM lessequal IDENTIFIER lessequal NUM  */
#line 85 "file.y"
                                                        { strcpy((yyval.code), "return "); strcat((yyval.code), (yyvsp[-4].var)); strcat((yyval.code), "<="); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), "<="); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), ";\n}\n");  }
#line 1511 "y.tab.c"
    break;

  case 43: /* ret_func: freturn NUM lessequal IDENTIFIER lessequal NUM plus IDENTIFIER  */
#line 86 "file.y"
                                                                        { strcpy((yyval.code), "\treturn "); strcat((yyval.code), (yyvsp[-6].var)); strcat((yyval.code), " <= "); strcat((yyval.code), (yyvsp[-4].var));strcat((yyval.code), " <= "); strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), " + "); strcat((yyval.code), (yyvsp[0].var)); strcat((yyval.code), ";\n"); }
#line 1517 "y.tab.c"
    break;

  case 44: /* blockmain: IDENTIFIER ravno cint lparen cinput lparen rparen rparen  */
#line 89 "file.y"
                                                                        { strcpy((yyval.code), "\tint ");  strcat((yyval.code), (yyvsp[-7].var)), strcat((yyval.code), ";\n");    strcat((yyval.code), "\tcin >> "); strcat((yyval.code), (yyvsp[-7].var)); strcat((yyval.code), ";\n");}
#line 1523 "y.tab.c"
    break;

  case 45: /* blockmain: IDENTIFIER lparen IDENTIFIER IDENTIFIER IDENTIFIER rparen  */
#line 90 "file.y"
                                                                   { strcpy((yyval.code), (yyvsp[-5].var)); strcat((yyval.code), "("); strcat((yyval.code), (yyvsp[-3].var)); strcat((yyval.code), ", ");  strcat((yyval.code), (yyvsp[-2].var)); strcat((yyval.code), ", ");  strcat((yyval.code), (yyvsp[-1].var)); strcat((yyval.code), ");\n"); strcat((yyval.code), "return 0;\n");}
#line 1529 "y.tab.c"
    break;


#line 1533 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 92 "file.y"




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
