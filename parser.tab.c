
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
     PASS = 294,
     RAISE = 295,
     RETURN = 296,
     TRY = 297,
     WHILE = 298,
     YIELD = 299,
     CASE = 300,
     PRINT = 301,
     WITH = 302,
     MATCH = 303,
     DOT = 304,
     COMMENT = 305,
     RANGE = 306,
     IMPORT = 307,
     IN = 308,
     IS = 309,
     LAMDA = 310,
     NONLOCAL = 311,
     NOT = 312,
     NULL_TOKEN = 313,
     OR = 314,
     PLUS = 315,
     NEWLINE = 316,
     GREATER_THAN = 317,
     LESS_THAN = 318,
     LESS_THAN_OR_EQUAL = 319,
     GREATER_THAN_OR_EQUAL = 320,
     AT = 321,
     DOUBLE_STAR = 322,
     ARROW = 323,
     NOT_EQUAL = 324,
     EQUAL = 325,
     FLOOR_DIVISION = 326,
     MODULUS = 327,
     EXPONENTIATION = 328,
     LEFT_BRACKET = 329,
     RIGHT_BRACKET = 330,
     LEFT_CURLY_BRACE = 331,
     RIGHT_CURLY_BRACE = 332,
     PLUS_ASSIGN = 333,
     MINUS_ASSIGN = 334,
     TIMES_ASSIGN = 335,
     DIVIDE_ASSIGN = 336,
     MODULO_ASSIGN = 337,
     POWER_ASSIGN = 338,
     AND_ASSIGN = 339,
     OR_ASSIGN = 340,
     XOR_ASSIGN = 341,
     LEFT_SHIFT_ASSIGN = 342,
     RIGHT_SHIFT_ASSIGN = 343,
     ASSIGN = 344,
     MINUS = 345,
     MULTIPLY = 346,
     DIVIDE = 347,
     COLON = 348,
     COMA = 349,
     LEFT_P = 350,
     RIGHT_P = 351
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
#define YYFINAL  116
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   813

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNRULES -- Number of states.  */
#define YYNSTATES  424

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
       0,     0,     3,     4,     6,    11,    15,    17,    20,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    67,    76,
      77,    80,    82,    84,    86,    88,    90,    92,    93,    95,
      97,   101,   105,   107,   111,   115,   117,   121,   127,   129,
     133,   138,   142,   148,   152,   154,   156,   160,   164,   166,
     173,   175,   179,   180,   182,   186,   188,   190,   192,   198,
     204,   209,   213,   218,   224,   232,   233,   236,   237,   240,
     241,   244,   248,   254,   261,   272,   285,   287,   291,   294,
     296,   301,   305,   307,   310,   313,   316,   319,   322,   324,
     326,   328,   330,   332,   334,   339,   341,   344,   345,   349,
     353,   357,   359,   360,   362,   364,   368,   370,   372,   376,
     380,   383,   386,   390,   395,   397,   400,   404,   409,   414,
     419,   424,   425,   428,   433,   437,   439,   442,   445,   448,
     450,   452,   454,   456,   458,   460,   462,   464,   466,   468,
     470,   474,   478,   482,   486,   490,   494,   498,   502,   506,
     510,   514,   518,   522,   526,   530,   532,   536,   540,   544,
     546,   549,   552,   555,   557,   561,   564,   566,   570,   572,
     576,   582,   584,   588,   590,   594,   596,   599,   601,   604,
     606,   608,   610,   612,   614,   616,   618,   620,   622,   624,
     626,   629,   632,   635,   638,   641,   644,   648,   651,   655,
     658,   662,   664,   668,   670,   674,   676,   680,   684,   686,
     690,   694,   696,   700,   704,   708,   712,   716,   718,   721,
     724,   727,   729,   733,   735,   737,   739,   741,   743,   745,
     747
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,    -1,   110,    -1,    61,     4,   110,     5,
      -1,     4,   110,     5,    -1,   111,    -1,   110,   111,    -1,
     112,    61,    -1,   113,    -1,   163,    -1,   169,    -1,    26,
      -1,    28,    -1,   170,    -1,   171,    -1,   173,    -1,   155,
      -1,   122,    -1,   157,    -1,   114,    -1,   138,    -1,   139,
      -1,   153,    -1,   129,    -1,   123,    -1,   145,    -1,     9,
     146,    95,   117,    96,   115,   109,    -1,    24,     9,    11,
      95,   117,    96,   115,   109,    -1,    -1,    68,   116,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      15,    -1,    -1,   118,    -1,   119,    -1,   120,    94,   118,
      -1,   120,    94,   119,    -1,   120,    -1,   121,    94,   119,
      -1,   121,    94,   118,    -1,   121,    -1,    11,    89,   176,
      -1,    11,    89,   176,    93,   116,    -1,    11,    -1,    11,
      93,   116,    -1,    11,    95,   148,    96,    -1,    47,   124,
     160,    -1,    24,    47,   124,    93,   160,    -1,   124,    94,
     125,    -1,   125,    -1,   126,    -1,    95,   126,    96,    -1,
     126,    94,   127,    -1,   127,    -1,   146,    95,   128,    96,
      22,   168,    -1,   176,    -1,   176,    22,   168,    -1,    -1,
     176,    -1,   176,    94,   128,    -1,   130,    -1,   131,    -1,
     132,    -1,    42,   109,   133,   159,   137,    -1,    42,   109,
     134,   159,   137,    -1,    42,   109,    34,   109,    -1,    33,
     136,   109,    -1,    33,   136,   109,   133,    -1,    33,    91,
     176,   135,   109,    -1,    33,    91,   176,   135,    93,   109,
     134,    -1,    -1,    22,    11,    -1,    -1,   176,   135,    -1,
      -1,    34,   109,    -1,    43,   176,   142,    -1,    35,   167,
      53,   140,   142,    -1,    24,    35,   167,    53,   140,   142,
      -1,    35,   167,    53,    51,    95,     3,    94,     3,    96,
     142,    -1,    35,   167,    53,    51,    95,     3,    94,     3,
      94,     3,    96,   142,    -1,   141,    -1,   141,    94,   140,
      -1,    97,   192,    -1,   176,    -1,    61,     4,   143,     5,
      -1,     4,   143,     5,    -1,   144,    -1,   143,   144,    -1,
     163,    61,    -1,   122,    61,    -1,    26,    61,    -1,    28,
      61,    -1,   157,    -1,   139,    -1,   153,    -1,   129,    -1,
     123,    -1,   145,    -1,    27,   146,   147,   109,    -1,    11,
      -1,   146,    11,    -1,    -1,    95,   148,    96,    -1,    95,
     150,    96,    -1,   148,    94,   150,    -1,   148,    -1,    -1,
     149,    -1,   176,    -1,   149,    94,   176,    -1,   151,    -1,
     152,    -1,   151,    94,   152,    -1,    11,    89,   176,    -1,
      91,   176,    -1,    67,   176,    -1,    48,   176,   154,    -1,
      61,     4,   155,     5,    -1,   156,    -1,   155,   156,    -1,
      45,   168,   109,    -1,    38,   176,   160,   158,    -1,    38,
     176,   160,   159,    -1,    31,   176,   160,   158,    -1,    31,
     176,   160,   159,    -1,    -1,    32,   109,    -1,    61,     4,
     161,     5,    -1,     4,   161,     5,    -1,   162,    -1,   161,
     162,    -1,   163,    61,    -1,   122,    61,    -1,   157,    -1,
     114,    -1,   138,    -1,   139,    -1,   153,    -1,   129,    -1,
     123,    -1,   145,    -1,   164,    -1,   165,    -1,   166,    -1,
     168,    89,   176,    -1,   168,    93,   176,    -1,   167,    89,
     175,    -1,   167,    93,   175,    -1,    11,    78,   176,    -1,
      11,    79,   176,    -1,    11,    80,   176,    -1,    11,    81,
     176,    -1,    11,    82,   176,    -1,    11,    83,   176,    -1,
      11,    84,   176,    -1,    11,    85,   176,    -1,    11,    86,
     176,    -1,    11,    87,   176,    -1,    11,    88,   176,    -1,
     168,    -1,   167,    94,   168,    -1,    95,   167,    96,    -1,
     168,    49,    11,    -1,    11,    -1,    41,   175,    -1,    44,
     175,    -1,    37,   172,    -1,    11,    -1,   172,    94,    11,
      -1,    56,   174,    -1,    11,    -1,   174,    94,    11,    -1,
     176,    -1,   175,    94,   176,    -1,   177,    38,   177,    32,
     176,    -1,   177,    -1,   177,    59,   178,    -1,   178,    -1,
     178,    16,   179,    -1,   179,    -1,    57,   179,    -1,   180,
      -1,   192,   181,    -1,   192,    -1,   182,    -1,   183,    -1,
     184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,    -1,
     189,    -1,   190,    -1,   191,    -1,    70,   192,    -1,    69,
     192,    -1,    64,   192,    -1,    63,   192,    -1,    65,   192,
      -1,    62,   192,    -1,    57,    53,   192,    -1,    53,   192,
      -1,    54,    57,   192,    -1,    54,   192,    -1,   192,    98,
     193,    -1,   193,    -1,   193,    99,   194,    -1,   194,    -1,
     194,   100,   195,    -1,   195,    -1,   195,   101,   196,    -1,
     195,   102,   196,    -1,   196,    -1,   196,    60,   197,    -1,
     196,    90,   197,    -1,   197,    -1,   197,    91,   198,    -1,
     197,    92,   198,    -1,   197,    71,   198,    -1,   197,    72,
     198,    -1,   197,   103,   198,    -1,   198,    -1,   104,   198,
      -1,   105,   198,    -1,   106,   198,    -1,   199,    -1,   200,
      73,   198,    -1,   200,    -1,    13,    -1,    14,    -1,    15,
      -1,    11,    -1,    10,    -1,     3,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    57,    64,    65,    71,    72,    75,    76,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    94,
      95,    96,    97,    98,    99,   100,   101,   112,   113,   116,
     117,   120,   121,   122,   123,   124,   125,   128,   129,   130,
     134,   135,   136,   139,   140,   141,   144,   145,   148,   149,
     155,   160,   161,   167,   168,   171,   172,   176,   177,   181,
     182,   183,   185,   187,   188,   193,   194,   195,   198,   200,
     202,   205,   206,   208,   209,   211,   212,   214,   215,   217,
     218,   223,   228,   229,   230,   231,   235,   236,   239,   240,
     243,   244,   248,   249,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   269,   271,   272,   275,   276,   277,
     278,   279,   282,   283,   288,   289,   293,   297,   298,   302,
     303,   304,   308,   310,   314,   315,   318,   323,   324,   330,
     331,   333,   335,   338,   339,   343,   344,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   363,   364,   365,
     370,   371,   376,   377,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   395,   396,   403,   404,   405,
     412,   417,   421,   424,   425,   429,   433,   434,   439,   440,
     445,   446,   452,   453,   459,   460,   466,   467,   473,   474,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     492,   496,   500,   504,   508,   512,   516,   520,   524,   528,
     535,   536,   542,   543,   548,   549,   554,   555,   556,   564,
     565,   566,   572,   573,   574,   575,   576,   577,   584,   585,
     586,   587,   593,   594,   599,   600,   601,   602,   603,   604,
     605
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
  "PASS", "RAISE", "RETURN", "TRY", "WHILE", "YIELD", "CASE", "PRINT",
  "WITH", "MATCH", "DOT", "COMMENT", "RANGE", "IMPORT", "IN", "IS",
  "LAMDA", "NONLOCAL", "NOT", "NULL_TOKEN", "OR", "PLUS", "NEWLINE",
  "GREATER_THAN", "LESS_THAN", "LESS_THAN_OR_EQUAL",
  "GREATER_THAN_OR_EQUAL", "AT", "DOUBLE_STAR", "ARROW", "NOT_EQUAL",
  "EQUAL", "FLOOR_DIVISION", "MODULUS", "EXPONENTIATION", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN",
  "POWER_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "ASSIGN", "MINUS", "MULTIPLY",
  "DIVIDE", "COLON", "COMA", "LEFT_P", "RIGHT_P", "'*'", "'|'", "'^'",
  "'&'", "'<'", "'>'", "'@'", "'+'", "'-'", "'~'", "$accept", "include",
  "block", "stmts", "stmt", "simple_stmt", "compound_stmt", "function_def",
  "return_type", "types", "parameters", "default_parameters",
  "non_default_parameters", "default_parameter", "non_default_parameter",
  "function_call", "with_statement", "with_statement_body", "with_body",
  "with_stmt_contents", "with_item", "inside_brackets", "try_stmt",
  "try1_stmt", "try2_stmt", "try3_stmt", "except_statement_plus_for_try1",
  "except_statement_plus_for_try2", "op_as", "op_expression_as",
  "op_finally", "while_statement", "for_statement", "star_expressions",
  "star_expression", "for_block", "for_stmts", "for_stmt", "class_def",
  "id", "arguments", "args", "args_list", "kwargs", "kwarg_list", "kwarg",
  "match_statement", "match_block", "case_statements", "case_statement",
  "if_statement", "elif_statement", "else_statement", "if_block",
  "if_stmts", "if_stmt", "assignment", "single_assignment",
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
       0,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   128,   129,   129,   129,   130,   131,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   139,   139,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   146,   146,   147,   147,   147,
     147,   147,   148,   148,   149,   149,   150,   151,   151,   152,
     152,   152,   153,   154,   155,   155,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   168,
     169,   170,   171,   172,   172,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   195,   196,
     196,   196,   197,   197,   197,   197,   197,   197,   198,   198,
     198,   198,   199,   199,   200,   200,   200,   200,   200,   200,
     200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     4,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     8,     0,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     5,     1,     3,
       4,     3,     5,     3,     1,     1,     3,     3,     1,     6,
       1,     3,     0,     1,     3,     1,     1,     1,     5,     5,
       4,     3,     4,     5,     7,     0,     2,     0,     2,     0,
       2,     3,     5,     6,    10,    12,     1,     3,     2,     1,
       4,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     4,     1,     2,     0,     3,     3,
       3,     1,     0,     1,     1,     3,     1,     1,     3,     3,
       2,     2,     3,     4,     1,     2,     3,     4,     4,     4,
       4,     0,     2,     4,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     1,     3,     2,     1,     3,     1,     3,
       5,     1,     3,     1,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,   169,     0,    12,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     6,     0,     9,    20,    18,    25,    24,    65,    66,
      67,    21,    22,    26,    23,    17,   124,    19,    10,   147,
     148,   149,     0,   165,    11,    14,    15,    16,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   107,   169,     0,   165,   173,
     172,   239,   240,   238,   237,   234,   235,   236,     0,     0,
       0,     0,     0,   181,   183,   185,   187,   189,   211,   213,
     215,   218,   221,   227,   231,   233,   170,   178,     0,     0,
       0,     0,   171,     0,   237,     0,     0,    54,    55,    58,
       0,    60,     0,   176,   175,     0,     1,     7,     8,   125,
       0,     0,     0,     0,     0,     0,   106,    37,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     0,
     113,   114,     0,     0,     0,   237,   112,     0,   111,     0,
       0,   186,   228,   229,   230,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   188,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,   131,
     131,     0,     0,    81,   126,     0,     0,    51,     0,    62,
       0,     0,   122,     0,   167,   152,   153,   166,   168,   150,
     151,    48,     0,    38,    39,    42,    45,    50,     0,    37,
       0,     0,   237,     0,     0,     0,     0,   116,   117,   104,
       0,     0,     0,     0,    86,    89,   174,   140,     0,   145,
     144,   141,   142,   146,   143,   139,     0,   135,     0,     0,
       0,     0,   127,   128,     0,   182,   184,   207,     0,   209,
       0,   205,   203,   202,   204,   201,   200,   210,   212,   214,
     216,   217,   219,   220,   224,   225,   222,   223,   226,   232,
     179,     5,     0,     0,     0,    75,    70,    79,    79,     0,
       0,     0,     0,   102,   101,    99,     0,    92,   103,   100,
      98,     0,     0,    56,    53,    57,     0,    63,    61,     0,
     177,     0,     0,    29,     0,     0,   115,     0,     0,    52,
       0,   121,   120,   108,   109,     0,     0,   110,     0,    88,
      82,     0,   138,   134,   136,   137,     0,     0,   132,     0,
     208,   206,     4,    75,    71,     0,    78,     0,    68,    69,
      96,    97,    95,    91,    93,    94,     0,     0,    62,     0,
      46,    36,    31,    32,    33,    34,    35,    49,     0,     0,
      40,    41,    44,    43,    29,    83,   119,   118,     0,    87,
     133,   131,   180,     0,    77,    72,    76,    80,    90,     0,
      64,   123,     0,    30,    27,     0,     0,   129,   130,     0,
      73,    59,    47,    28,     0,     0,     0,     0,     0,    74,
       0,    84,     0,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,   100,    20,    21,    22,    23,    24,   379,   377,
     222,   223,   224,   225,   226,    25,    26,   106,   107,   108,
     109,   316,    27,    28,    29,    30,   199,   200,   356,   294,
     358,    31,    32,   243,   244,   203,   306,   307,    33,   110,
     147,   139,   140,   236,   237,   238,    34,   212,    35,    36,
      37,   262,   263,   157,   256,   257,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    70,    47,   114,    96,   111,
      83,    84,    85,    86,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    87,    88,    89,    90,    91,
      92,    93,    94,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -282
static const yytype_int16 yypact[] =
{
     693,    22,   711,   186,  -282,    22,  -282,    12,    55,   415,
     415,    36,   415,   415,    12,   316,   415,    66,    12,    99,
     693,  -282,    93,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,   115,  -282,  -282,  -282,  -282,
    -282,  -282,   142,   -18,  -282,  -282,  -282,  -282,  -282,    19,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   146,    12,   316,   261,  -282,     9,   122,  -282,
      86,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   415,   450,
     450,   450,    64,   114,   172,  -282,  -282,   710,   103,   107,
      96,    10,   170,  -282,  -282,   151,   140,  -282,   693,   236,
      60,    92,   140,    20,    48,   424,    17,  -282,   157,  -282,
      49,   223,   193,  -282,   163,    69,  -282,  -282,  -282,  -282,
     415,   415,    12,   252,   415,   415,  -282,   254,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   171,
     176,  -282,   182,    45,   150,   245,   278,    36,   188,   297,
     276,  -282,  -282,  -282,  -282,   718,   294,   248,   415,   415,
     415,   450,   437,   246,   450,   450,   450,   450,   450,   450,
     450,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   415,   522,   693,   385,    36,   269,
     269,   476,   299,  -282,  -282,   119,   316,  -282,   424,   415,
      12,   305,  -282,   306,  -282,   140,   140,   122,  -282,  -282,
    -282,   -13,   225,  -282,  -282,   229,   231,  -282,   415,   254,
     402,    64,   239,   415,   415,   238,   240,   244,  -282,  -282,
      91,   237,   450,    92,   249,  -282,  -282,  -282,   281,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   588,  -282,   283,   718,
     415,    36,  -282,  -282,     2,   172,  -282,   255,   450,   255,
     450,   255,   255,   255,   255,   255,   255,   103,   107,    96,
      10,    10,   170,   170,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,   563,   415,    36,   324,  -282,   313,   313,    32,
     291,   296,   298,  -282,  -282,  -282,   613,  -282,  -282,  -282,
    -282,   300,   476,  -282,  -282,  -282,   262,   268,   122,   115,
    -282,   415,   357,   295,   254,   254,  -282,   272,    92,  -282,
     415,  -282,  -282,  -282,  -282,    91,   239,  -282,   361,   255,
    -282,   402,  -282,  -282,  -282,  -282,   638,    64,  -282,   415,
     255,   255,  -282,   324,   337,   360,  -282,    36,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   663,   358,   415,    90,
     286,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   357,    36,
    -282,  -282,  -282,  -282,   295,  -282,  -282,  -282,   287,  -282,
    -282,   248,  -282,    31,   415,  -282,  -282,  -282,  -282,    12,
    -282,  -282,   357,  -282,  -282,    36,   382,  -282,  -282,    36,
    -282,   122,  -282,  -282,   120,   354,   386,    92,   315,  -282,
     301,  -282,    92,  -282
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,  -282,   -89,   -88,   -14,  -282,  -282,  -123,     6,  -211,
     162,   -41,   -30,  -282,  -282,  -138,  -137,   340,   201,   303,
     206,    51,  -136,  -282,  -282,  -282,    70,    -6,    78,  -282,
     135,  -114,  -129,  -215,  -282,  -223,   124,  -281,  -128,   195,
    -282,   -36,  -282,   203,  -282,   106,  -127,  -282,   125,   -32,
    -119,    58,  -187,   -97,   187,  -240,  -100,  -282,  -282,  -282,
     148,    -7,  -282,  -282,  -282,  -282,  -282,  -282,    41,    -8,
     304,   307,   -56,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,   -78,   284,   273,   274,   112,
     128,   -42,  -282,  -282
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
      68,    82,    97,   119,   101,    97,   117,   103,   112,   207,
     195,    68,   297,   298,   204,   328,   344,   248,   249,   250,
     340,   155,   151,    66,    98,   364,   252,   253,   254,   148,
     126,   123,   247,    48,   349,    98,   255,   152,   153,   154,
      98,   251,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   141,   102,   258,    68,   141,   239,  -105,
     126,   159,   149,   302,   303,   304,    69,    63,   155,   123,
     186,   124,   305,   308,   309,   125,   321,   113,   156,    64,
     322,    99,   310,   267,   269,   364,   271,   272,   273,   274,
     275,   276,    99,   197,   198,   401,   201,    99,   230,   116,
     187,   311,   336,   122,   266,   385,   344,    18,   292,   296,
     235,   206,    97,    97,   127,   217,   219,   220,   248,   249,
     250,   248,   249,   250,   409,   156,   389,   252,   253,   254,
     252,   253,   254,   247,   329,    14,   247,   255,   141,   122,
     255,   245,   251,  -105,   209,   251,   284,   285,   286,   287,
     288,   289,   158,   202,   118,    67,   258,   142,   233,   258,
      14,   215,   216,   122,   339,   214,   115,   403,   302,   303,
     304,   123,   348,   159,   302,   303,   304,   305,   308,   309,
     150,   117,   234,   305,   308,   309,   290,   310,   160,   295,
     350,   412,   351,   310,   421,    62,    49,   184,   185,   423,
      65,   317,   182,   318,   408,   354,   311,   183,   248,   249,
     250,   143,   311,   208,   416,   313,   417,   252,   253,   254,
     326,    63,   245,   247,   193,   331,   332,   255,   302,   303,
     304,   120,   251,    64,   194,   121,   122,   305,   308,   309,
     196,   188,   189,   231,   206,   210,   258,   310,  -106,  -106,
     391,   208,   347,  -106,   211,  -106,  -106,   213,  -106,  -106,
    -106,   190,   191,   218,    71,   221,   311,   227,   397,    72,
     228,    73,   145,   192,    75,    76,    77,   229,   117,   260,
     261,    71,   240,   380,   382,   353,    72,   246,    73,   232,
     404,    75,    76,    77,   381,   383,   280,   281,   259,   270,
      71,   261,  -106,   312,   410,    72,  -106,    73,    74,   319,
      75,    76,    77,   370,   282,   283,   413,   320,    78,    71,
     415,   323,   386,   324,    72,   325,    73,   104,   330,    75,
      76,    77,   338,   245,   333,    78,   334,   119,   335,  -106,
    -106,   392,   342,   341,   345,   233,   355,   357,   241,  -106,
    -106,  -106,   360,   170,    78,  -112,   146,   361,   367,   362,
     317,   365,   368,   378,   388,    79,    80,    81,   384,   234,
     394,   396,   371,    78,   372,   373,   374,   375,   376,   402,
     399,   406,    79,    80,    81,   414,   295,   418,    71,   420,
     405,   327,   411,    72,   242,    73,    74,   422,    75,    76,
      77,    79,    80,    81,   144,    71,   293,   314,   205,   419,
      72,   105,    73,    74,   315,    75,    76,    77,    71,   400,
      79,    80,    81,    72,   395,    73,    74,    71,    75,    76,
      77,   393,    72,   359,    73,   104,   366,    75,    76,    77,
      71,   387,    78,   337,   369,    72,   346,    73,    74,   407,
      75,    76,    77,    71,   277,   278,     0,   279,    72,    78,
      73,    74,   264,    75,    76,    77,   265,     0,     0,     0,
       0,     0,    78,     0,     0,     0,   293,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     2,     0,    79,
      80,    81,     0,     0,   268,     0,     0,     0,     0,   242,
     299,     0,   300,     5,   301,     0,    79,    80,    81,     0,
       0,     7,     0,     0,     9,     0,     0,     0,    11,    79,
      80,    81,     0,    15,    16,     0,     0,   291,    79,    80,
      81,     1,     0,     2,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,     0,     0,     3,     0,     4,     5,
       6,     0,     0,     0,    79,    80,    81,     7,     0,     8,
       9,     0,     0,    10,    11,    12,    13,    14,   352,    15,
      16,    18,     1,     0,     2,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     4,
       5,     6,     0,   343,     0,     0,     0,     1,     7,     2,
       8,     9,     0,     0,    10,    11,    12,    13,    14,     0,
      15,    16,     3,     0,     0,     5,     0,    18,   363,    17,
       0,     0,     0,     7,     2,     0,     9,     0,     0,     0,
      11,    12,     0,     0,     0,    15,    16,   299,     0,   300,
       5,   301,     0,   390,     0,     0,     0,     1,     7,     2,
       0,     9,     0,     0,     0,    11,     0,     0,    18,     0,
      15,    16,     3,     0,     0,     5,     0,     0,   398,     0,
       0,     0,     0,     7,     2,     0,     9,     0,     0,     0,
      11,    12,     0,    18,     0,    15,    16,   299,     0,   300,
       5,   301,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     9,     1,     0,     2,    11,     0,     0,    18,     0,
      15,    16,     0,     0,     0,     0,     0,     3,     0,     4,
       5,     6,     0,     0,     0,     0,     0,     1,     7,     2,
       8,     9,     0,    18,    10,    11,    12,    13,    14,     0,
      15,    16,     3,     0,     0,     5,     0,     0,     0,    17,
       0,     0,     0,     7,     0,     0,     9,     0,    18,     0,
      11,    12,     0,   161,   162,    15,    16,   163,     0,     0,
       0,     0,   164,   165,   166,   167,     0,     0,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,    18,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,    61,     0,   170,     0,
       0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
       7,     9,    10,    35,    12,    13,    20,    14,    16,   106,
      98,    18,   199,   200,   103,   230,   256,   155,   155,   155,
     243,     4,    78,    11,     4,   306,   155,   155,   155,    65,
      11,    49,   155,    11,    32,     4,   155,    79,    80,    81,
       4,   155,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    13,   155,    63,    65,   147,    11,
      11,    59,    53,   201,   201,   201,    11,    35,     4,    49,
      60,    89,   201,   201,   201,    93,    89,    11,    61,    47,
      93,    61,   201,   161,   162,   366,   164,   165,   166,   167,
     168,   169,    61,    33,    34,     5,     4,    61,    53,     0,
      90,   201,    11,    94,   160,   328,   346,    95,   196,   198,
     146,    94,   120,   121,    95,   122,   124,   125,   256,   256,
     256,   259,   259,   259,    93,    61,   341,   256,   256,   256,
     259,   259,   259,   256,   231,    45,   259,   256,   146,    94,
     259,   149,   256,    95,    95,   259,   188,   189,   190,   191,
     192,   193,    38,    61,    61,     7,   256,    11,    67,   259,
      45,   120,   121,    94,   242,    96,    18,   378,   306,   306,
     306,    49,   261,    59,   312,   312,   312,   306,   306,   306,
      94,   195,    91,   312,   312,   312,   194,   306,    16,   197,
     268,   402,   270,   312,   417,     9,     1,   101,   102,   422,
       5,   209,    99,   210,   391,   294,   306,   100,   346,   346,
     346,    63,   312,    94,    94,    96,    96,   346,   346,   346,
     228,    35,   230,   346,    73,   233,   234,   346,   366,   366,
     366,    89,   346,    47,    94,    93,    94,   366,   366,   366,
       4,    71,    72,    93,    94,    22,   346,   366,     3,     4,
     347,    94,   260,     8,    61,    10,    11,    94,    13,    14,
      15,    91,    92,    11,     3,    11,   366,    96,   357,     8,
      94,    10,    11,   103,    13,    14,    15,    95,   292,    31,
      32,     3,    94,   324,   325,   293,     8,    11,    10,    11,
     379,    13,    14,    15,   324,   325,   184,   185,     4,    53,
       3,    32,    57,     4,   393,     8,    61,    10,    11,     4,
      13,    14,    15,   321,   186,   187,   405,    11,    57,     3,
     409,    96,   330,    94,     8,    94,    10,    11,    89,    13,
      14,    15,    95,   341,    96,    57,    96,   369,    94,    94,
      95,   349,    61,    94,    61,    67,    22,    34,    51,   104,
     105,   106,    61,    98,    57,    94,    95,    61,    96,    61,
     368,    61,    94,    68,     3,   104,   105,   106,    96,    91,
      33,    11,    15,    57,    17,    18,    19,    20,    21,    93,
      22,    94,   104,   105,   106,     3,   394,    33,     3,     3,
     384,   229,   399,     8,    97,    10,    11,    96,    13,    14,
      15,   104,   105,   106,    64,     3,    91,   206,   105,   415,
       8,    95,    10,    11,   208,    13,    14,    15,     3,   368,
     104,   105,   106,     8,   354,    10,    11,     3,    13,    14,
      15,   353,     8,   298,    10,    11,   312,    13,    14,    15,
       3,   335,    57,   240,   319,     8,   259,    10,    11,   391,
      13,    14,    15,     3,   170,   182,    -1,   183,     8,    57,
      10,    11,   158,    13,    14,    15,   159,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    11,    -1,   104,
     105,   106,    -1,    -1,    57,    -1,    -1,    -1,    -1,    97,
      24,    -1,    26,    27,    28,    -1,   104,   105,   106,    -1,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,   104,
     105,   106,    -1,    47,    48,    -1,    -1,     5,   104,   105,
     106,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,    24,    -1,    26,    27,
      28,    -1,    -1,    -1,   104,   105,   106,    35,    -1,    37,
      38,    -1,    -1,    41,    42,    43,    44,    45,     5,    47,
      48,    95,     9,    -1,    11,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      27,    28,    -1,     5,    -1,    -1,    -1,     9,    35,    11,
      37,    38,    -1,    -1,    41,    42,    43,    44,    45,    -1,
      47,    48,    24,    -1,    -1,    27,    -1,    95,     5,    56,
      -1,    -1,    -1,    35,    11,    -1,    38,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    24,    -1,    26,
      27,    28,    -1,     5,    -1,    -1,    -1,     9,    35,    11,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    95,    -1,
      47,    48,    24,    -1,    -1,    27,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    35,    11,    -1,    38,    -1,    -1,    -1,
      42,    43,    -1,    95,    -1,    47,    48,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,     9,    -1,    11,    42,    -1,    -1,    95,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,     9,    35,    11,
      37,    38,    -1,    95,    41,    42,    43,    44,    45,    -1,
      47,    48,    24,    -1,    -1,    27,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    95,    -1,
      42,    43,    -1,    53,    54,    47,    48,    57,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    98,    -1,
      -1,    -1,    -1,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    24,    26,    27,    28,    35,    37,    38,
      41,    42,    43,    44,    45,    47,    48,    56,    95,   108,
     110,   111,   112,   113,   114,   122,   123,   129,   130,   131,
     132,   138,   139,   145,   153,   155,   156,   157,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   173,    11,   146,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    95,     9,    35,    47,   146,    11,   167,   168,    11,
     172,     3,     8,    10,    11,    13,    14,    15,    57,   104,
     105,   106,   176,   177,   178,   179,   180,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   175,   176,     4,    61,
     109,   176,   175,   168,    11,    95,   124,   125,   126,   127,
     146,   176,   176,    11,   174,   167,     0,   111,    61,   156,
      89,    93,    94,    49,    89,    93,    11,    95,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   148,
     149,   176,    11,   167,   124,    11,    95,   147,   148,    53,
      94,   179,   198,   198,   198,     4,    61,   160,    38,    59,
      16,    53,    54,    57,    62,    63,    64,    65,    69,    70,
      98,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    99,   100,   101,   102,    60,    90,    71,    72,
      91,    92,   103,    73,    94,   110,     4,    33,    34,   133,
     134,     4,    61,   142,   109,   126,    94,   160,    94,    95,
      22,    61,   154,    94,    96,   175,   175,   168,    11,   176,
     176,    11,   117,   118,   119,   120,   121,    96,    94,    95,
      53,    93,    11,    67,    91,   148,   150,   151,   152,   109,
      94,    51,    97,   140,   141,   176,    11,   114,   122,   123,
     129,   138,   139,   145,   153,   157,   161,   162,   163,     4,
      31,    32,   158,   159,   177,   178,   179,   192,    57,   192,
      53,   192,   192,   192,   192,   192,   192,   193,   194,   195,
     196,   196,   197,   197,   198,   198,   198,   198,   198,   198,
     176,     5,   110,    91,   136,   176,   109,   159,   159,    24,
      26,    28,   122,   123,   129,   139,   143,   144,   145,   153,
     157,   163,     4,    96,   125,   127,   128,   176,   168,     4,
      11,    89,    93,    96,    94,    94,   176,   117,   140,   160,
      89,   176,   176,    96,    96,    94,    11,   150,    95,   192,
     142,    94,    61,     5,   162,    61,   161,   176,   109,    32,
     192,   192,     5,   176,   109,    22,   135,    34,   137,   137,
      61,    61,    61,     5,   144,    61,   143,    96,    94,   155,
     176,    15,    17,    18,    19,    20,    21,   116,    68,   115,
     118,   119,   118,   119,    96,   142,   176,   152,     3,   140,
       5,   160,   176,   135,    33,   133,    11,   109,     5,    22,
     128,     5,    93,   116,   109,   115,    94,   158,   159,    93,
     109,   168,   116,   109,     3,   109,    94,    96,    33,   134,
       3,   142,    96,   142
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
        case 3:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    {
	printf("end of statement \n");YYACCEPT;
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {printf("function statement \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {printf(" ASYNC function statement \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {printf("function call \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {printf("with statement \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {printf("ASYNC with statement \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    { printf("try statement \n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { printf("try statement \n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { printf("try statement \n"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { printf("while statement \n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { printf("for ASYNC statement \n"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { printf("for statement \n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    {;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {printf("class definition \n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { printf("match statement \n"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { printf("if statement \n"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { printf("if statement \n"); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    {;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    {;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    {  printf("return statement \n ");  ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {  printf("yield statement \n ");  ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {  printf("global statement \n ");  ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 429 "parser.y"
    {  printf("nonlocal statement \n ");  ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    { ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    {  ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 496 "parser.y"
    {    ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 500 "parser.y"
    {   ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 504 "parser.y"
    {  ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 508 "parser.y"
    {;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    {;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 516 "parser.y"
    { ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    {  ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 524 "parser.y"
    {  ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 528 "parser.y"
    {  ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 535 "parser.y"
    {  ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 542 "parser.y"
    { ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 548 "parser.y"
    {;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 554 "parser.y"
    {;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 555 "parser.y"
    { ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 564 "parser.y"
    {;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 565 "parser.y"
    { ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 572 "parser.y"
    {;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 573 "parser.y"
    {;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 574 "parser.y"
    {;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 575 "parser.y"
    {;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 576 "parser.y"
    {;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 593 "parser.y"
    {;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 599 "parser.y"
    { ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 600 "parser.y"
    { ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 601 "parser.y"
    { ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 602 "parser.y"
    { ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 603 "parser.y"
    { ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 604 "parser.y"
    { ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 605 "parser.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2749 "parser.tab.c"
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
#line 610 "parser.y"




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


void yyerror(const char *msg) {
      printf(" %s \n", msg);
}
