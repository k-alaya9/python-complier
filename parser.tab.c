
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();



/* Line 189 of yacc.c  */
#line 86 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     INDENT = 259,
     DEDENT = 260,
     INDENT_ERROR = 261,
     NUMBER = 262,
     FLOAT = 263,
     DEF = 264,
     STRING = 265,
     ID = 266,
     MAIN = 267,
     TRUE_TOKEN = 268,
     FALSE_TOKEN = 269,
     NONE = 270,
     AND = 271,
     INT_KEYWORD = 272,
     FLOAT_KEYWORD = 273,
     STRING_KEYWORD = 274,
     BOOL_KEYWORD = 275,
     LIST_KEYWORD = 276,
     AS = 277,
     ASSERT = 278,
     ASYNC = 279,
     AWAIT = 280,
     BREAK = 281,
     CLASS = 282,
     CONTINUE = 283,
     DEL = 284,
     INPUT = 285,
     ELIF = 286,
     ELSE = 287,
     EXCEPT = 288,
     FINALLY = 289,
     FOR = 290,
     FROM = 291,
     GLOBAL = 292,
     IF = 293,
     IMPORT = 294,
     IN = 295,
     IS = 296,
     LAMDA = 297,
     NONLOCAL = 298,
     NOT = 299,
     NULL_TOKEN = 300,
     OR = 301,
     PASS = 302,
     RAISE = 303,
     RETURN = 304,
     TRY = 305,
     WHILE = 306,
     YIELD = 307,
     CASE = 308,
     PRINT = 309,
     WITH = 310,
     MATCH = 311,
     DOT = 312,
     COMMENT = 313,
     RANGE = 314,
     ASSIGN = 315,
     MINUS = 316,
     MULTIPLY = 317,
     DIVIDE = 318,
     COLON = 319,
     COMA = 320,
     LEFT_P = 321,
     RIGHT_P = 322,
     PLUS = 323,
     NEWLINE = 324,
     GREATER_THAN = 325,
     LESS_THAN = 326,
     LESS_THAN_OR_EQUAL = 327,
     GREATER_THAN_OR_EQUAL = 328,
     AT = 329,
     DOUBLE_STAR = 330,
     ARROW = 331,
     NOT_EQUAL = 332,
     EQUAL = 333,
     FLOOR_DIVISION = 334,
     MODULUS = 335,
     EXPONENTIATION = 336,
     LEFT_BRACKET = 337,
     RIGHT_BRACKET = 338,
     LEFT_CURLY_BRACE = 339,
     RIGHT_CURLY_BRACE = 340,
     PLUS_ASSIGN = 341,
     MINUS_ASSIGN = 342,
     TIMES_ASSIGN = 343,
     DIVIDE_ASSIGN = 344,
     MODULO_ASSIGN = 345,
     POWER_ASSIGN = 346,
     AND_ASSIGN = 347,
     OR_ASSIGN = 348,
     XOR_ASSIGN = 349,
     LEFT_SHIFT_ASSIGN = 350,
     RIGHT_SHIFT_ASSIGN = 351
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 "parser.y"

     char* str_val;
         int int_val;
         float float_val;



/* Line 214 of yacc.c  */
#line 226 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 238 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  225
/* YYNRULES -- Number of states.  */
#define YYNSTATES  394

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,     2,
       2,     2,    97,   104,     2,   105,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,     2,   102,     2,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    98,     2,   106,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    37,    41,    43,
      46,    49,    51,    53,    55,    57,    59,    61,    63,    65,
      67,    69,    71,    73,    75,    77,    79,    81,    83,    91,
     100,   101,   104,   106,   108,   110,   112,   114,   116,   117,
     119,   121,   125,   129,   131,   135,   139,   141,   145,   151,
     153,   157,   162,   166,   172,   175,   177,   181,   183,   185,
     189,   193,   195,   202,   204,   208,   209,   211,   215,   217,
     219,   221,   227,   231,   236,   242,   248,   256,   257,   260,
     261,   264,   265,   268,   273,   277,   283,   290,   301,   314,
     316,   320,   323,   325,   330,   332,   335,   336,   340,   344,
     348,   350,   351,   353,   355,   359,   361,   363,   367,   371,
     374,   377,   381,   386,   388,   391,   395,   400,   405,   410,
     415,   416,   419,   421,   423,   425,   429,   433,   437,   441,
     445,   449,   453,   457,   461,   465,   469,   473,   477,   481,
     485,   487,   491,   495,   499,   501,   504,   507,   510,   512,
     516,   519,   521,   525,   527,   531,   537,   539,   543,   545,
     549,   551,   554,   556,   559,   561,   563,   565,   567,   569,
     571,   573,   575,   577,   579,   581,   584,   587,   590,   593,
     596,   599,   603,   606,   610,   613,   617,   619,   623,   625,
     629,   631,   635,   639,   641,   645,   649,   651,   655,   659,
     663,   667,   671,   673,   676,   679,   682,   684,   688,   690,
     692,   694,   696,   698,   700,   702
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,    -1,   109,    -1,   110,    -1,   109,    69,
     110,    -1,   157,    -1,   116,    -1,   160,    -1,   124,    -1,
     141,    -1,   142,    -1,   153,    -1,   145,    -1,   132,    -1,
     125,    -1,    69,     4,   112,     5,    -1,     4,   112,     5,
      -1,   113,    -1,   112,   113,    -1,   114,    69,    -1,   115,
      -1,   160,    -1,   166,    -1,    26,    -1,    28,    -1,   167,
      -1,   168,    -1,   170,    -1,   155,    -1,   124,    -1,   157,
      -1,   116,    -1,   141,    -1,   142,    -1,   153,    -1,   132,
      -1,   125,    -1,     9,   146,    66,   119,    67,   117,   111,
      -1,    24,     9,    11,    66,   119,    67,   117,   111,    -1,
      -1,    76,   118,    -1,    17,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    15,    -1,    -1,   120,    -1,   121,
      -1,   122,    65,   120,    -1,   122,    65,   121,    -1,   122,
      -1,   123,    65,   121,    -1,   123,    65,   120,    -1,   123,
      -1,    11,    60,   173,    -1,    11,    60,   173,    64,   118,
      -1,    11,    -1,    11,    64,   118,    -1,    11,    66,   149,
      67,    -1,    55,   127,   126,    -1,    24,    55,   127,    64,
     126,    -1,   109,    69,    -1,   111,    -1,   127,    65,   128,
      -1,   128,    -1,   129,    -1,    66,   129,    67,    -1,   129,
      65,   130,    -1,   130,    -1,   146,    66,   131,    67,    22,
     165,    -1,   173,    -1,   173,    22,   165,    -1,    -1,   173,
      -1,   173,    65,   131,    -1,   133,    -1,   135,    -1,   140,
      -1,    50,   111,   134,   159,   139,    -1,    33,   137,   111,
      -1,    33,   137,   111,   134,    -1,    50,   111,   136,   159,
     139,    -1,    33,    62,   173,   138,   111,    -1,    33,    62,
     173,   138,    64,   126,   136,    -1,    -1,   173,   138,    -1,
      -1,    22,    11,    -1,    -1,    34,   111,    -1,    50,   111,
      34,   111,    -1,    51,   173,   111,    -1,    35,   164,    40,
     143,   111,    -1,    24,    35,   164,    40,   143,   111,    -1,
      35,   164,    40,    59,    66,     3,    65,     3,    67,   111,
      -1,    35,   164,    40,    59,    66,     3,    65,     3,    65,
       3,    67,   111,    -1,   144,    -1,   144,    65,   143,    -1,
      97,   189,    -1,   173,    -1,    27,   146,   147,   111,    -1,
      11,    -1,   146,    11,    -1,    -1,    66,   148,    67,    -1,
      66,   150,    67,    -1,   148,    65,   150,    -1,   148,    -1,
      -1,   149,    -1,   173,    -1,   149,    65,   173,    -1,   151,
      -1,   152,    -1,   151,    65,   152,    -1,    11,    60,   173,
      -1,    62,   173,    -1,    75,   173,    -1,    56,   173,   154,
      -1,    69,     4,   155,     5,    -1,   156,    -1,   155,   156,
      -1,    53,   165,   111,    -1,    38,   173,   111,   158,    -1,
      38,   173,   111,   159,    -1,    31,   173,   111,   158,    -1,
      31,   173,   111,   159,    -1,    -1,    32,   111,    -1,   161,
      -1,   162,    -1,   163,    -1,   165,    60,   173,    -1,   165,
      64,   173,    -1,   164,    60,   172,    -1,   164,    64,   172,
      -1,    11,    86,   173,    -1,    11,    87,   173,    -1,    11,
      88,   173,    -1,    11,    89,   173,    -1,    11,    90,   173,
      -1,    11,    91,   173,    -1,    11,    92,   173,    -1,    11,
      93,   173,    -1,    11,    94,   173,    -1,    11,    95,   173,
      -1,    11,    96,   173,    -1,   165,    -1,   164,    65,   165,
      -1,    66,   164,    67,    -1,   165,    57,    11,    -1,    11,
      -1,    49,   172,    -1,    52,   172,    -1,    37,   169,    -1,
      11,    -1,   169,    65,    11,    -1,    43,   171,    -1,    11,
      -1,   171,    65,    11,    -1,   173,    -1,   172,    65,   173,
      -1,   174,    38,   174,    32,   173,    -1,   174,    -1,   174,
      46,   175,    -1,   175,    -1,   175,    16,   176,    -1,   176,
      -1,    44,   176,    -1,   177,    -1,   189,   178,    -1,   189,
      -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,
      -1,   184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,
      -1,    78,   189,    -1,    77,   189,    -1,    72,   189,    -1,
      71,   189,    -1,    73,   189,    -1,    70,   189,    -1,    44,
      40,   189,    -1,    40,   189,    -1,    41,    44,   189,    -1,
      41,   189,    -1,   189,    98,   190,    -1,   190,    -1,   190,
      99,   191,    -1,   191,    -1,   191,   100,   192,    -1,   192,
      -1,   192,   101,   193,    -1,   192,   102,   193,    -1,   193,
      -1,   193,    68,   194,    -1,   193,    61,   194,    -1,   194,
      -1,   194,    62,   195,    -1,   194,    63,   195,    -1,   194,
      79,   195,    -1,   194,    80,   195,    -1,   194,   103,   195,
      -1,   195,    -1,   104,   195,    -1,   105,   195,    -1,   106,
     195,    -1,   196,    -1,   197,    81,   195,    -1,   197,    -1,
      13,    -1,    14,    -1,    15,    -1,    11,    -1,    10,    -1,
       3,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    55,    56,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    73,    74,    77,    78,
      81,    82,    88,    89,    90,    91,    92,    93,    94,    95,
      96,   100,   101,   102,   103,   104,   105,   106,   117,   118,
     121,   122,   125,   126,   127,   128,   129,   130,   133,   134,
     135,   139,   140,   141,   144,   145,   146,   149,   150,   153,
     154,   160,   165,   166,   170,   171,   175,   176,   179,   180,
     184,   185,   189,   190,   191,   193,   195,   196,   202,   202,
     202,   204,   207,   208,   210,   212,   213,   215,   216,   218,
     219,   221,   222,   224,   227,   231,   232,   233,   234,   238,
     239,   244,   245,   251,   253,   254,   256,   257,   258,   259,
     260,   263,   264,   268,   269,   273,   277,   278,   282,   283,
     284,   288,   290,   294,   295,   298,   303,   304,   310,   311,
     313,   315,   321,   322,   323,   328,   329,   334,   335,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     353,   354,   361,   362,   363,   370,   375,   379,   382,   383,
     387,   391,   392,   397,   398,   403,   404,   410,   411,   417,
     418,   424,   425,   431,   432,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   450,   454,   458,   462,   466,
     470,   474,   478,   482,   486,   493,   494,   500,   501,   506,
     507,   512,   513,   514,   522,   523,   524,   530,   531,   532,
     533,   534,   535,   542,   543,   544,   545,   551,   552,   557,
     558,   559,   560,   561,   562,   563
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INDENT", "DEDENT",
  "INDENT_ERROR", "NUMBER", "FLOAT", "DEF", "STRING", "ID", "MAIN",
  "TRUE_TOKEN", "FALSE_TOKEN", "NONE", "AND", "INT_KEYWORD",
  "FLOAT_KEYWORD", "STRING_KEYWORD", "BOOL_KEYWORD", "LIST_KEYWORD", "AS",
  "ASSERT", "ASYNC", "AWAIT", "BREAK", "CLASS", "CONTINUE", "DEL", "INPUT",
  "ELIF", "ELSE", "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF",
  "IMPORT", "IN", "IS", "LAMDA", "NONLOCAL", "NOT", "NULL_TOKEN", "OR",
  "PASS", "RAISE", "RETURN", "TRY", "WHILE", "YIELD", "CASE", "PRINT",
  "WITH", "MATCH", "DOT", "COMMENT", "RANGE", "ASSIGN", "MINUS",
  "MULTIPLY", "DIVIDE", "COLON", "COMA", "LEFT_P", "RIGHT_P", "PLUS",
  "NEWLINE", "GREATER_THAN", "LESS_THAN", "LESS_THAN_OR_EQUAL",
  "GREATER_THAN_OR_EQUAL", "AT", "DOUBLE_STAR", "ARROW", "NOT_EQUAL",
  "EQUAL", "FLOOR_DIVISION", "MODULUS", "EXPONENTIATION", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN",
  "POWER_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "'*'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'@'", "'+'", "'-'", "'~'", "$accept", "includ",
  "statements", "statement", "block", "stmts", "stmt", "simple_stmt",
  "compound_stmt", "function_def", "return_type", "types", "parameters",
  "default_parameters", "non_default_parameters", "default_parameter",
  "non_default_parameter", "function_call", "with_statement", "suite",
  "with_statement_body", "with_body", "with_stmt_contents", "with_item",
  "inside_brackets", "try_stmt", "try1_stmt",
  "except_statement_plus_for_try1", "try2_stmt",
  "except_statement_plus_for_try2", "op_expression_as", "op_as",
  "op_finally", "try3_stmt", "while_statement", "for_statement",
  "star_expressions", "star_expression", "class_def", "id", "arguments",
  "args", "args_list", "kwargs", "kwarg_list", "kwarg", "match_statement",
  "match_block", "case_statements", "case_statement", "if_statement",
  "elif_statement", "else_statement", "assignment", "single_assignment",
  "multi_assignment", "augmented_assignment", "targets", "target",
  "return_stmt", "yield_statement", "global_statement", "global_list",
  "nonlocal_statement", "nonlocal_list", "expressions", "expression",
  "disjunction", "conjunction", "inversion", "comparison",
  "compare_op_bitwise_or_pair", "eq_bitwise_or", "noteq_bitwise_or",
  "lte_bitwise_or", "lt_bitwise_or", "gte_bitwise_or", "gt_bitwise_or",
  "notin_bitwise_or", "in_bitwise_or", "isnot_bitwise_or", "is_bitwise_or",
  "bitwise_or", "bitwise_xor", "bitwise_and", "shift_expr", "sum", "term",
  "factor", "power", "atom", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    42,   124,    94,
      38,    60,    62,    64,    43,    45,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   131,   131,   131,   132,   132,
     132,   133,   134,   134,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   146,   146,   147,   147,   147,   147,
     147,   148,   148,   149,   149,   150,   151,   151,   152,   152,
     152,   153,   154,   155,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   165,   166,   167,   168,   169,   169,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   192,   193,   193,   193,   194,   194,   194,
     194,   194,   194,   195,   195,   195,   195,   196,   196,   197,
     197,   197,   197,   197,   197,   197
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     8,
       0,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     5,     1,
       3,     4,     3,     5,     2,     1,     3,     1,     1,     3,
       3,     1,     6,     1,     3,     0,     1,     3,     1,     1,
       1,     5,     3,     4,     5,     5,     7,     0,     2,     0,
       2,     0,     2,     4,     3,     5,     6,    10,    12,     1,
       3,     2,     1,     4,     1,     2,     0,     3,     3,     3,
       1,     0,     1,     1,     3,     1,     1,     3,     3,     2,
       2,     3,     4,     1,     2,     3,     4,     4,     4,     4,
       0,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     1,     3,
       2,     1,     3,     1,     3,     5,     1,     3,     1,     3,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     7,     9,    15,    14,    78,
      79,    80,    10,    11,    13,    12,     6,     8,   132,   133,
     134,     0,   150,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   154,     0,   150,   224,   225,   223,   222,   219,   220,
     221,     0,     0,     0,     0,     0,   166,   168,   170,   172,
     174,   196,   198,   200,   203,   206,   212,   216,   218,     0,
       0,     0,     0,   222,     0,     0,    67,    68,    71,     0,
      73,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,   105,    48,     0,   113,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,   222,
     111,     0,   110,   112,     0,   171,   213,   214,   215,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    18,     0,    21,    32,    30,    37,
      36,    33,    34,    35,    29,   123,    31,    22,    23,    26,
      27,    28,     0,    87,     0,   130,   130,    94,     0,     0,
       0,    65,    62,     0,    75,     0,     0,   121,   152,     5,
     137,   163,   138,   151,   153,   135,   136,    59,     0,    49,
      50,    53,    56,     0,    61,    48,     0,     0,   222,     0,
       0,     0,     0,   115,   116,   103,     0,     0,     0,     0,
      99,   102,     0,     0,   126,   127,     0,   167,   169,   192,
       0,   194,     0,   190,   188,   187,   189,   186,   185,   195,
     197,   199,   201,   202,   205,   204,   207,   208,   209,   210,
     211,   217,   158,   157,   161,   160,   155,   156,     0,    17,
      19,    20,   124,     0,     0,     0,    89,    93,    91,    91,
      69,    66,    64,    70,     0,    76,    74,     0,     0,     0,
       0,    40,     0,     0,   114,     0,     0,    63,     0,   119,
     120,   107,   108,     0,     0,   109,     0,   101,    95,     0,
       0,   131,     0,   193,   191,     0,     0,   125,    16,    89,
      82,     0,    88,     0,    81,    84,     0,    75,     0,   164,
      57,    47,    42,    43,    44,    45,    46,    60,     0,     0,
      51,    52,    55,    54,    40,    96,   118,   117,     0,   100,
     130,   165,   159,   162,     0,    87,    83,    90,    92,     0,
      77,   122,     0,    41,    38,     0,     0,   128,   129,     0,
      85,    72,    58,    39,     0,     0,     0,     0,     0,    86,
       0,    97,     0,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,   200,    14,   201,   173,   174,   175,   176,    15,
     349,   347,   218,   219,   220,   221,   222,    16,    17,   202,
      85,    86,    87,    88,   294,    18,    19,   195,    20,   196,
     285,   332,   334,    21,    22,    23,   239,   240,    24,    89,
     121,   122,   123,   232,   233,   234,    25,   207,   184,   185,
      26,   244,   245,    27,    28,    29,    30,    31,    32,   188,
     189,   190,   273,   191,   275,   210,    90,    66,    67,    68,
      69,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    70,    71,    72,    73,    74,    75,    76,    77,
      78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -307
static const yytype_int16 yypact[] =
{
     620,    52,   601,   120,    52,    22,   407,    18,   407,   348,
     407,    22,    43,    -1,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,   166,    10,  -307,    28,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,    62,    22,   348,
     151,  -307,    -5,   100,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,   407,   138,   138,   138,    18,    31,    70,  -307,  -307,
     532,    26,     9,    87,    23,   244,  -307,  -307,    63,   590,
     146,   169,    18,    29,   422,   451,  -307,    98,  -307,    54,
     149,   123,    80,  -307,   620,   407,   407,    22,   179,   407,
     407,  -307,   194,    93,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,   154,    -3,   135,    68,
     183,    18,   163,   184,   290,  -307,  -307,  -307,  -307,   207,
     407,   407,   407,   138,   435,   211,   138,   138,   138,   138,
     138,   138,   138,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,  -307,  -307,   243,   249,
     407,   407,    22,   224,  -307,   201,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   219,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,   590,   364,    18,   259,   259,  -307,   112,   348,
     223,  -307,  -307,   422,   407,    22,   292,  -307,  -307,  -307,
     229,  -307,   229,   100,  -307,  -307,  -307,    72,   230,  -307,
    -307,   237,   246,   407,  -307,   194,   390,   494,   248,   407,
     407,   245,   247,   250,  -307,  -307,    81,   251,   138,    18,
     253,  -307,   407,    18,  -307,  -307,    13,    70,  -307,   218,
     138,   218,   138,   218,   218,   218,   218,   218,   218,    26,
       9,    87,    23,    23,   244,   244,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,   255,  -307,   256,   229,   229,    32,  -307,
    -307,  -307,  -307,   542,   407,    18,   300,  -307,   291,   291,
    -307,  -307,   620,  -307,   260,   263,   100,   219,   407,   407,
     204,   261,   194,   194,  -307,   262,    18,  -307,   407,  -307,
    -307,  -307,  -307,    81,   248,  -307,   328,   218,  -307,   390,
      18,  -307,   407,   218,   218,   321,   324,  -307,  -307,   300,
     303,   327,  -307,    18,  -307,  -307,   317,   407,    27,  -307,
     276,  -307,  -307,  -307,  -307,  -307,  -307,  -307,   204,    18,
    -307,  -307,  -307,  -307,   261,  -307,  -307,  -307,   278,  -307,
     207,  -307,  -307,  -307,    21,   407,  -307,  -307,  -307,    22,
    -307,  -307,   204,  -307,  -307,    18,   338,  -307,  -307,   494,
    -307,   100,  -307,  -307,   113,   311,   342,    18,   284,  -307,
     283,  -307,    18,  -307
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -307,  -307,   352,   -81,    -7,   161,  -157,  -307,  -307,   -77,
       0,  -306,   130,   -56,   -39,  -307,  -307,   -76,   -75,  -209,
     315,   167,   285,   157,    33,   -74,  -307,    41,  -307,   -12,
    -307,    53,    92,  -307,   -73,   -71,  -206,  -307,  -307,    37,
    -307,   264,   351,   147,  -307,    75,   -70,  -307,    94,  -169,
     -69,    30,  -184,   -65,  -307,  -307,  -307,   119,    -4,  -307,
    -307,  -307,  -307,  -307,  -307,   -32,    11,   267,   258,   -27,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -110,   257,   252,   254,   109,   110,   121,  -307,
    -307
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -112
static const yytype_int16 yytable[] =
{
      81,    53,   177,   178,   179,   180,   181,    53,   182,   183,
     186,   288,   289,   209,   187,   282,   280,    65,   307,    82,
     306,    91,    79,   249,   251,    79,   253,   254,   255,   256,
     257,   258,   371,    51,   125,   124,    79,   226,    34,   101,
    -104,    50,   373,    93,    53,   322,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   129,   131,
      97,   104,    97,    33,   212,   101,   382,    98,    94,   130,
      99,  -105,  -105,   116,   100,   197,  -105,   131,  -105,  -105,
     172,  -105,  -105,  -105,   158,   379,   132,    80,    11,    98,
      80,   159,   314,   213,   102,  -104,   177,   178,   179,   180,
     181,    80,   182,   183,   186,   248,   211,   211,   187,   155,
     215,   216,  -105,   359,   235,   177,   178,   179,   180,   181,
     204,   182,   183,   186,    52,   154,   280,   187,   317,    47,
      92,   104,   299,  -105,  -105,   241,   300,  -105,   276,   277,
     323,    54,   324,   229,   165,    97,    55,   208,    56,    57,
     192,    58,    59,    60,    54,    48,   230,    98,   223,    55,
     224,    56,   119,   203,    58,    59,    60,   117,   278,   282,
     385,   205,  -105,  -105,  -105,    49,   378,   203,   386,   290,
     387,   211,   211,   126,   127,   128,    54,   287,   156,   157,
     214,    55,   206,    56,   228,    61,    58,    59,    60,   227,
     199,   296,   193,   194,   286,   217,   177,   178,   179,   180,
     181,   209,   182,   183,   186,   295,  -111,   120,   187,   341,
     225,   342,   343,   344,   345,   346,    95,    61,   236,   279,
      96,    97,   318,     1,   304,     2,   321,   241,   242,   243,
     309,   310,    62,    63,    64,   229,   350,   352,     3,   223,
     166,   252,   167,   320,   272,    62,    63,    64,   230,     5,
     274,   168,     6,   351,   353,   262,   263,   169,   264,   265,
     281,   327,   172,   170,     7,     8,   171,   172,   330,     9,
      10,   266,   267,   268,   269,   270,   271,    62,    63,    64,
      11,   243,   292,    54,   298,   329,   297,   301,    55,   355,
      56,    57,   302,    58,    59,    60,   160,   161,   308,   339,
     340,   303,   311,   360,   312,   313,   142,   316,   319,   356,
     325,   326,   331,   162,   163,   333,   368,   336,   337,   354,
     241,   358,   362,   361,    61,   363,   365,   348,   367,   369,
     372,   384,   374,   376,   388,   390,   284,   164,   295,   237,
     392,    54,    13,   283,   375,   305,    55,   380,    56,    83,
     293,    58,    59,    60,   118,   381,   291,    54,   383,   198,
     370,   366,    55,   389,    56,    57,   286,    58,    59,    60,
     391,   335,   364,   315,   231,   393,   103,   238,   357,   247,
     377,   338,    61,    54,    62,    63,    64,   246,    55,   259,
      56,    57,     0,    58,    59,    60,   260,     0,    61,   261,
      54,     0,     0,     0,    84,    55,     0,    56,    57,     0,
      58,    59,    60,     0,     0,    54,   284,     0,     0,     0,
      55,     0,    56,    83,    61,    58,    59,    60,    54,     0,
       0,     0,     0,    55,     0,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,    79,     0,     0,     0,     0,
       1,     0,     2,     0,     0,     0,    61,     0,    62,    63,
      64,     0,     0,     0,     0,     3,     0,     0,     4,   250,
       0,     0,     0,     0,     0,     0,     5,   238,     0,     6,
       0,     0,     0,     0,    62,    63,    64,     0,    79,     0,
       0,     7,     8,     1,     0,     2,     9,    10,     0,     0,
       0,    62,    63,    64,     0,     0,   199,    11,     3,     0,
      80,     4,     0,     0,     0,     0,    62,    63,    64,     5,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    62,
      63,    64,     0,     0,     7,     8,     0,   328,     0,     9,
      10,     1,     0,     2,     0,     0,     0,     0,     0,     0,
      11,     0,     0,    80,     0,     0,     3,     0,   166,     0,
     167,     0,   133,   134,     0,     0,   135,     5,     0,   168,
       6,     0,     0,     0,     0,   169,     0,     0,     0,     0,
       0,   170,     7,     8,   171,   172,     0,     9,    10,     1,
       0,     2,   136,   137,   138,   139,     0,     0,    11,   140,
     141,     0,     0,     0,     3,     0,   166,     0,   167,     0,
       0,     0,     0,     0,     0,     5,     0,   168,     6,     1,
     142,     2,     0,   169,     0,     0,     0,     0,     0,   170,
       7,     8,   171,   172,     3,     9,    10,     4,     0,     0,
       0,     0,     0,     0,     0,     5,    11,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       7,     8,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46
};

static const yytype_int16 yycheck[] =
{
       7,     5,    79,    79,    79,    79,    79,    11,    79,    79,
      79,   195,   196,    94,    79,   184,   173,     6,   227,     8,
     226,    10,     4,   133,   134,     4,   136,   137,   138,   139,
     140,   141,     5,    11,    61,    40,     4,    40,     1,    11,
      11,     4,   348,     0,    48,    32,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    65,    46,
      65,    50,    65,    11,    96,    11,   372,    57,    69,    38,
      60,     3,     4,    11,    64,    82,     8,    46,    10,    11,
      53,    13,    14,    15,    61,    64,    16,    69,    66,    57,
      69,    68,    11,    97,    66,    66,   173,   173,   173,   173,
     173,    69,   173,   173,   173,   132,    95,    96,   173,   100,
      99,   100,    44,   319,   121,   192,   192,   192,   192,   192,
      66,   192,   192,   192,     5,    99,   283,   192,   238,     9,
      11,   120,    60,    65,    66,   124,    64,    69,   170,   171,
     250,     3,   252,    62,    81,    65,     8,    67,    10,    11,
       4,    13,    14,    15,     3,    35,    75,    57,    65,     8,
      67,    10,    11,    65,    13,    14,    15,    48,   172,   338,
     379,    22,   104,   105,   106,    55,   360,    65,    65,    67,
      67,   170,   171,    62,    63,    64,     3,   194,   101,   102,
      11,     8,    69,    10,    11,    44,    13,    14,    15,    64,
      65,   205,    33,    34,   193,    11,   283,   283,   283,   283,
     283,   292,   283,   283,   283,   204,    65,    66,   283,    15,
      66,    17,    18,    19,    20,    21,    60,    44,    65,     5,
      64,    65,   239,     9,   223,    11,   243,   226,    31,    32,
     229,   230,   104,   105,   106,    62,   302,   303,    24,    65,
      26,    40,    28,   242,    11,   104,   105,   106,    75,    35,
      11,    37,    38,   302,   303,   156,   157,    43,   158,   159,
      69,   278,    53,    49,    50,    51,    52,    53,   285,    55,
      56,   160,   161,   162,   163,   164,   165,   104,   105,   106,
      66,    32,    69,     3,    65,   284,     4,    67,     8,   306,
      10,    11,    65,    13,    14,    15,    62,    63,    60,   298,
     299,    65,    67,   320,    67,    65,    98,    66,    65,   308,
      65,    65,    22,    79,    80,    34,   333,    67,    65,    67,
     319,     3,    11,   322,    44,    11,    33,    76,    11,    22,
      64,     3,   349,    65,    33,     3,    62,   103,   337,    59,
      67,     3,     0,   192,   354,   225,     8,   364,    10,    11,
     203,    13,    14,    15,    49,   369,   199,     3,   375,    84,
     337,   330,     8,   385,    10,    11,   365,    13,    14,    15,
     387,   289,   329,   236,   120,   392,    35,    97,   313,   131,
     360,   297,    44,     3,   104,   105,   106,   130,     8,   142,
      10,    11,    -1,    13,    14,    15,   154,    -1,    44,   155,
       3,    -1,    -1,    -1,    66,     8,    -1,    10,    11,    -1,
      13,    14,    15,    -1,    -1,     3,    62,    -1,    -1,    -1,
       8,    -1,    10,    11,    44,    13,    14,    15,     3,    -1,
      -1,    -1,    -1,     8,    -1,    10,    11,    -1,    13,    14,
      15,    44,   104,   105,   106,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    -1,    -1,    44,    -1,   104,   105,
     106,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    97,    -1,    38,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,     4,    -1,
      -1,    50,    51,     9,    -1,    11,    55,    56,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,    65,    66,    24,    -1,
      69,    27,    -1,    -1,    -1,    -1,   104,   105,   106,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,    -1,    50,    51,    -1,     5,    -1,    55,
      56,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    69,    -1,    -1,    24,    -1,    26,    -1,
      28,    -1,    40,    41,    -1,    -1,    44,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,     9,
      -1,    11,    70,    71,    72,    73,    -1,    -1,    66,    77,
      78,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,     9,
      98,    11,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    24,    55,    56,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    66,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      50,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    24,    27,    35,    38,    50,    51,    55,
      56,    66,   108,   109,   110,   116,   124,   125,   132,   133,
     135,   140,   141,   142,   145,   153,   157,   160,   161,   162,
     163,   164,   165,    11,   146,    66,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     9,    35,    55,
     146,    11,   164,   165,     3,     8,    10,    11,    13,    14,
      15,    44,   104,   105,   106,   173,   174,   175,   176,   177,
     189,   190,   191,   192,   193,   194,   195,   196,   197,     4,
      69,   111,   173,    11,    66,   127,   128,   129,   130,   146,
     173,   173,   164,     0,    69,    60,    64,    65,    57,    60,
      64,    11,    66,   149,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,    11,   164,   127,    11,
      66,   147,   148,   149,    40,   176,   195,   195,   195,   111,
      38,    46,    16,    40,    41,    44,    70,    71,    72,    73,
      77,    78,    98,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    99,   100,   101,   102,    61,    68,
      62,    63,    79,    80,   103,    81,    26,    28,    37,    43,
      49,    52,    53,   112,   113,   114,   115,   116,   124,   125,
     132,   141,   142,   153,   155,   156,   157,   160,   166,   167,
     168,   170,     4,    33,    34,   134,   136,   111,   129,    65,
     109,   111,   126,    65,    66,    22,    69,   154,    67,   110,
     172,   173,   172,   165,    11,   173,   173,    11,   119,   120,
     121,   122,   123,    65,    67,    66,    40,    64,    11,    62,
      75,   148,   150,   151,   152,   111,    65,    59,    97,   143,
     144,   173,    31,    32,   158,   159,   174,   175,   176,   189,
      44,   189,    40,   189,   189,   189,   189,   189,   189,   190,
     191,   192,   193,   193,   194,   194,   195,   195,   195,   195,
     195,   195,    11,   169,    11,   171,   172,   172,   165,     5,
     113,    69,   156,   112,    62,   137,   173,   111,   159,   159,
      67,   128,    69,   130,   131,   173,   165,     4,    65,    60,
      64,    67,    65,    65,   173,   119,   143,   126,    60,   173,
     173,    67,    67,    65,    11,   150,    66,   189,   111,    65,
     173,   111,    32,   189,   189,    65,    65,   111,     5,   173,
     111,    22,   138,    34,   139,   139,    67,    65,   155,   173,
     173,    15,    17,    18,    19,    20,    21,   118,    76,   117,
     120,   121,   120,   121,    67,   111,   173,   152,     3,   143,
     111,   173,    11,    11,   138,    33,   134,    11,   111,    22,
     131,     5,    64,   118,   111,   117,    65,   158,   159,    64,
     111,   165,   118,   111,     3,   126,    65,    67,    33,   136,
       3,   111,    67,   111
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    {
	printf("end of statement \n");YYACCEPT;
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    { ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("function statement \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf(" ASYNC function statement \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {printf("function call \n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {printf("with statement \n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {printf("ASYNC with statement \n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { printf("while statement \n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { printf("for ASYNC statement \n"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {printf("class definition \n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { printf("match statement \n"); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { printf("if statement \n"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { printf("if statement \n"); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    { ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {  printf("return statement \n ");  ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {  printf("yield statement \n ");  ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {  printf("global statement \n ");  ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    {  printf("nonlocal statement \n ");  ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    { ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    { ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    {  ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
    { ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    {    ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    {   ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    {  ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    {;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    {;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    { ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    {  ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    {  ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    {  ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 493 "parser.y"
    {  ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 500 "parser.y"
    { ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    {;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    {;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 513 "parser.y"
    { ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 522 "parser.y"
    {;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 523 "parser.y"
    { ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 531 "parser.y"
    {;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 532 "parser.y"
    {;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 533 "parser.y"
    {;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    {;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 551 "parser.y"
    {;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 557 "parser.y"
    { ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 558 "parser.y"
    { ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 559 "parser.y"
    { ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
    { ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 561 "parser.y"
    { ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 562 "parser.y"
    { ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 563 "parser.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2613 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 568 "parser.y"




void main(int argc, char **argv)
{
/*success("This is a valid python expression");*/
      if (argc > 1){
            for(int i=0;i<argc;i++)
                  printf("value of argv[%d] = %s\n\n",i,argv[i]);
                  yyin=fopen(argv[1],"r");
      }
      else
            yyin=stdin;
      yyparse();
}

/* int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s\n", s);
//     return 1;
// }*/

void yyerror(const char *msg) {
      printf(" %s \n", msg);
}
