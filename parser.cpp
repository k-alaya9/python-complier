/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int yydebug=1;
void yyerror(const char *);
extern int yylex();


#line 77 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "parser.y" /* yacc.c:355  */

      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>

#line 113 "parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:355  */

     char* str_val;
         int int_val;
         float float_val;
	     AstNode* astNode;
         IdentifierNode* idNode;
	int d;


#line 232 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 26 "parser.y" /* yacc.c:358  */

      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;

#line 255 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  117
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   881

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    80,    84,    84,    92,    96,   103,
     108,   114,   115,   120,   121,   122,   123,   124,   125,   126,
     130,   131,   132,   133,   134,   135,   136,   137,   148,   160,
     172,   173,   176,   177,   178,   179,   180,   181,   184,   185,
     186,   190,   191,   192,   196,   201,   205,   212,   213,   216,
     223,   229,   234,   235,   241,   242,   245,   246,   250,   251,
     255,   256,   257,   259,   261,   262,   267,   268,   269,   272,
     274,   276,   279,   280,   282,   283,   285,   286,   288,   289,
     291,   292,   297,   302,   303,   304,   305,   309,   310,   313,
     314,   317,   318,   322,   323,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   343,   345,   346,   349,   350,
     351,   352,   353,   356,   357,   362,   363,   367,   371,   372,
     376,   377,   378,   382,   384,   388,   389,   392,   397,   398,
     404,   405,   407,   409,   412,   413,   417,   418,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   437,   438,
     439,   444,   445,   450,   451,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   469,   470,   477,   478,
     479,   486,   487,   497,   501,   504,   505,   509,   513,   514,
     519,   520,   525,   526,   532,   533,   539,   540,   546,   547,
     553,   554,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   572,   576,   580,   584,   588,   592,   596,   600,
     604,   608,   615,   616,   622,   623,   628,   629,   634,   635,
     636,   644,   645,   646,   652,   653,   654,   655,   656,   657,
     664,   665,   666,   667,   673,   674,   679,   680,   681,   682,
     683,   684,   685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "block", "$@1", "stmts", "stmt", "simple_stmt", "compound_stmt",
  "function_def", "return_type", "types", "parameters",
  "default_parameters", "non_default_parameters", "default_parameter",
  "non_default_parameter", "function_call", "with_statement",
  "with_statement_body", "with_body", "with_stmt_contents", "with_item",
  "inside_brackets", "try_stmt", "try1_stmt", "try2_stmt", "try3_stmt",
  "except_statement_plus_for_try1", "except_statement_plus_for_try2",
  "op_as", "op_expression_as", "op_finally", "while_statement",
  "for_statement", "star_expressions", "star_expression", "for_block",
  "for_stmts", "for_stmt", "class_def", "id", "arguments", "args",
  "args_list", "kwargs", "kwarg_list", "kwarg", "match_statement",
  "match_block", "case_statements", "case_statement", "if_statement",
  "elif_statement", "else_statement", "if_block", "if_stmts", "if_stmt",
  "assignment", "single_assignment", "multi_assignment",
  "augmented_assignment", "targets", "target", "return_stmt",
  "yield_statement", "global_statement", "global_list",
  "nonlocal_statement", "nonlocal_list", "expressions", "expression",
  "disjunction", "conjunction", "inversion", "comparison",
  "compare_op_bitwise_or_pair", "eq_bitwise_or", "noteq_bitwise_or",
  "lte_bitwise_or", "lt_bitwise_or", "gte_bitwise_or", "gt_bitwise_or",
  "notin_bitwise_or", "in_bitwise_or", "isnot_bitwise_or", "is_bitwise_or",
  "bitwise_or", "bitwise_xor", "bitwise_and", "shift_expr", "sum", "term",
  "factor", "power", "atom", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -273

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define YYTABLE_NINF -173

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     736,    58,   757,   127,  -273,    65,  -273,     6,    68,   452,
     461,    33,   452,   452,     6,   393,   452,   139,     6,   152,
     736,  -273,    99,  -273,   175,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,   143,  -273,  -273,  -273,  -273,
    -273,  -273,   132,   -18,  -273,  -273,  -273,  -273,    97,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   184,     6,   393,  -273,   282,  -273,     5,   158,  -273,
     107,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   452,   521,
     521,   521,    35,    39,   197,  -273,  -273,   540,   118,   123,
      54,   -20,   144,  -273,  -273,   161,   178,   148,  -273,   736,
     249,    74,    49,   148,    34,    21,   481,    17,  -273,   163,
    -273,    56,   233,   198,  -273,   164,   -35,  -273,  -273,  -273,
    -273,  -273,   452,   452,     6,   251,   452,   452,   252,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     169,   166,  -273,   176,     9,    90,   264,   323,    33,   179,
     342,   259,  -273,  -273,  -273,  -273,   761,   272,   136,   452,
     452,   452,   521,   502,   228,   521,   521,   521,   521,   521,
     521,   521,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   452,   536,   736,   402,    33,
     250,   250,   786,   285,  -273,  -273,    70,   393,  -273,   481,
    -273,   452,     6,   287,  -273,   275,  -273,   148,   148,   158,
    -273,  -273,  -273,   -21,   202,  -273,  -273,   200,   205,  -273,
     452,   252,   422,    35,   211,   452,   452,   207,   217,   213,
    -273,  -273,    82,   206,   521,    49,   222,  -273,  -273,  -273,
     256,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   631,  -273,
     258,   761,   452,    33,  -273,  -273,    31,   197,  -273,   224,
     521,   224,   521,   224,   224,   224,   224,   224,   224,   118,
     123,    54,   -20,   -20,   144,   144,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,   606,   452,    33,   298,  -273,   289,
     289,   106,   266,   267,   268,  -273,  -273,  -273,   656,  -273,
    -273,  -273,  -273,   269,   786,  -273,  -273,  -273,   236,   246,
     158,   143,  -273,   452,   291,   273,   252,   252,  -273,   248,
      49,  -273,   452,  -273,  -273,  -273,  -273,    82,   211,  -273,
     339,   224,  -273,   422,  -273,  -273,  -273,  -273,   681,    35,
    -273,   452,   224,   224,  -273,  -273,   298,   314,   337,  -273,
      33,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   706,
     327,   452,    55,   261,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,   291,    33,  -273,  -273,  -273,  -273,   273,  -273,  -273,
    -273,   270,  -273,  -273,   136,  -273,    19,   452,  -273,  -273,
    -273,  -273,     6,  -273,  -273,   291,  -273,  -273,    33,   357,
    -273,  -273,    33,  -273,   158,  -273,  -273,   104,   328,   359,
      49,   274,  -273,   271,  -273,    49,  -273
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   170,     0,    13,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     7,     0,    10,    21,    19,    26,    25,    66,    67,
      68,    22,    23,    27,    24,    18,   125,    20,    11,   148,
     149,   150,     0,   166,    12,    15,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,   106,   108,   170,     0,   166,   175,
     174,   241,   242,   240,   239,   236,   237,   238,     0,     0,
       0,     0,     0,   183,   185,   187,   189,   191,   213,   215,
     217,   220,   223,   229,   233,   235,   239,   171,   180,     0,
       0,     0,     0,   173,     0,   239,     0,     0,    55,    56,
      59,     0,    61,     0,   178,   177,     0,     1,     8,    21,
       9,   126,     0,     0,     0,     0,     0,     0,    38,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   114,   115,     0,     0,     0,   239,   113,     0,   112,
       0,     0,   188,   230,   231,   232,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
     132,   132,     0,     0,    82,   127,     0,     0,    52,     0,
     107,    63,     0,     0,   123,     0,   168,   153,   154,   167,
     169,   151,   152,    49,     0,    39,    40,    41,    46,    51,
       0,    38,     0,     0,   239,     0,     0,     0,     0,   117,
     118,   105,     0,     0,     0,     0,    87,    90,   176,   141,
       0,   146,   145,   142,   143,   147,   144,   140,     0,   136,
       0,     0,     0,     0,   128,   129,     0,   184,   186,   209,
       0,   211,     0,   207,   205,   204,   206,   203,   202,   212,
     214,   216,   218,   219,   221,   222,   226,   227,   224,   225,
     228,   234,   181,     5,     0,     0,     0,    76,    71,    80,
      80,     0,     0,     0,     0,   103,   102,   100,     0,    93,
     104,   101,    99,     0,     0,    57,    54,    58,     0,    64,
      62,     0,   179,     0,     0,    30,     0,     0,   116,     0,
       0,    53,     0,   122,   121,   109,   110,     0,     0,   111,
       0,    89,    83,     0,   139,   135,   137,   138,     0,     0,
     133,     0,   210,   208,     6,     4,    76,    72,     0,    79,
       0,    69,    70,    97,    98,    96,    92,    94,    95,     0,
       0,    63,     0,    47,    37,    32,    33,    34,    35,    36,
      50,     0,     0,    42,    43,    45,    44,    30,    84,   120,
     119,     0,    88,   134,   132,   182,     0,    78,    73,    77,
      81,    91,     0,    65,   124,     0,    31,    28,     0,     0,
     130,   131,     0,    74,    60,    48,    29,     0,     0,     0,
       0,     0,    75,     0,    85,     0,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,   -94,  -273,   -70,   -14,  -273,  -273,     3,   -16,
    -224,   135,   -97,   -89,  -273,  -273,  -138,  -137,   309,   167,
     276,   170,     2,  -136,  -273,  -273,  -273,    18,   -40,    25,
    -273,    83,  -130,  -129,  -217,  -273,  -221,    71,  -272,  -128,
     379,  -273,   -43,  -273,   149,  -273,    57,  -100,  -273,    76,
     -26,   -65,    -2,  -188,   -93,   137,  -242,   -64,  -273,  -273,
    -273,   147,    -7,  -273,  -273,  -273,  -273,  -273,  -273,    12,
      -8,   241,   242,   -48,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,   -81,   238,   235,   227,
      60,    64,   -46,  -273,  -273
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,   101,   354,    20,    21,    22,    23,   119,   382,
     380,   224,   225,   226,   227,   228,    25,    26,   107,   108,
     109,   110,   318,    27,    28,    29,    30,   200,   201,   359,
     296,   361,    31,    32,   245,   246,   204,   308,   309,    33,
     111,   148,   140,   141,   238,   239,   240,    34,   214,    35,
      36,    37,   264,   265,   158,   258,   259,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    70,    47,   115,    97,
     112,    83,    84,    85,    86,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    87,    88,    89,    90,
      91,    92,    93,    94,    95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    82,    98,    24,   102,    98,   118,   104,   113,   121,
     205,    68,   299,   300,   208,   330,   346,    66,   250,   251,
     252,   156,   149,    99,   342,   103,   253,   254,   255,   196,
     152,   125,  -106,   153,   154,   155,   367,    99,    99,   156,
     187,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   142,   202,   241,    68,   256,   142,   150,   124,
     404,   216,   232,   351,   304,   305,   306,   210,   323,    48,
     188,   126,   324,   307,   310,   127,    64,   159,   157,    69,
     100,   269,   271,   125,   273,   274,   275,   276,   277,   278,
     160,   257,   260,   338,   100,   100,   157,   367,   160,   124,
      14,    18,   311,   124,   237,   298,   346,   198,   199,   388,
     203,   207,   412,   268,    98,    98,  -106,   219,   221,   222,
     250,   251,   252,   250,   251,   252,   392,   294,   253,   254,
     255,   253,   254,   255,   217,   218,    61,   312,   313,   142,
     331,    62,   247,   286,   287,   288,   289,   290,   291,   235,
     114,   211,   117,    63,    67,   185,   186,   406,   256,   249,
     120,   256,    62,   341,   209,   116,   315,   262,   263,   350,
     304,   305,   306,   236,    63,    -2,   304,   305,   306,   307,
     310,   415,   118,   233,   207,   307,   310,   292,    14,   352,
     297,   353,   128,   257,   260,   143,   257,   260,   419,   424,
     420,   151,   357,   319,   426,   320,   411,   125,   311,   144,
     250,   251,   252,   161,   311,   189,   190,   183,   253,   254,
     255,   122,   328,   184,   247,   123,   124,   333,   334,   383,
     385,   304,   305,   306,   194,   191,   192,   384,   386,  -172,
     307,   310,   195,   312,   313,   282,   283,   193,   256,   312,
     313,   284,   285,   197,   349,   212,   394,   209,   215,   213,
     230,   249,   220,   223,   249,   229,   400,  -107,  -107,   311,
     248,   231,  -107,   242,  -107,  -107,   261,  -107,  -107,  -107,
     118,   272,   263,   257,   260,    71,   322,   356,   407,   314,
      72,   321,    73,   146,   326,    75,    76,    77,   325,   327,
     332,   340,   413,   335,   312,   313,   374,   337,   375,   376,
     377,   378,   379,   336,   416,   373,   343,   344,   418,   347,
     358,  -107,   171,   360,   389,  -107,    71,   363,   364,   365,
     368,    72,   370,    73,   234,   247,    75,    76,    77,    78,
     371,   381,   391,   395,   387,    71,   121,   397,   399,   402,
      72,   249,    73,    74,   405,    75,    76,    77,  -107,  -107,
     417,   421,   423,   319,   409,   295,   329,   425,  -107,  -107,
    -107,   408,   145,   403,   316,   398,  -113,   147,   422,   317,
      78,   396,   206,   362,    65,   369,    79,    80,    81,   297,
     235,   339,   410,   243,   390,   414,    71,   372,   348,    78,
     266,    72,   267,    73,   105,    71,    75,    76,    77,   279,
      72,   281,    73,    74,   236,    75,    76,    77,   280,     0,
       0,     0,     0,     0,     0,    71,     0,    79,    80,    81,
      72,     0,    73,    74,     0,    75,    76,    77,     0,   244,
       0,     0,     0,     0,     0,     0,    79,    80,    81,     0,
      78,     0,     0,     0,     0,    71,     0,     0,     0,    78,
      72,     0,    73,    74,    71,    75,    76,    77,     0,    72,
       0,    73,    96,     0,    75,    76,    77,     0,     0,    78,
       0,     0,     0,     0,    71,     0,     0,     0,   106,    72,
       0,    73,   105,   295,    75,    76,    77,    79,    80,    81,
       0,     0,     0,     0,     0,    71,    79,    80,    81,    78,
      72,     0,    73,    74,     0,    75,    76,    77,    78,   244,
       0,     0,     0,     0,    71,     0,    79,    80,    81,    72,
       0,    73,    74,     0,    75,    76,    77,     0,    78,     0,
       0,   293,     0,     0,     0,     1,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,   270,
       3,     0,     4,     5,     6,    79,    80,    81,     0,     0,
       0,     7,     0,     8,     9,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,    79,    80,    81,     0,     0,
       0,     0,    17,   162,   163,     0,     0,   164,     0,     0,
       0,     0,   165,   166,   167,   168,    79,    80,    81,   169,
     170,   355,     0,     0,     0,     1,     0,     2,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,     0,     0,
       3,    18,     4,     5,     6,     0,   345,     0,   171,     0,
       1,     7,     2,     8,     9,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,     3,     0,     0,     5,     0,
       0,   366,    17,     0,     0,     0,     7,     2,     0,     9,
       0,     0,     0,    11,    12,     0,     0,     0,    15,    16,
     301,     0,   302,     5,   303,     0,   393,     0,     0,     0,
       1,     7,     2,     0,     9,     0,     0,     0,    11,     0,
       0,    18,     0,    15,    16,     3,     0,     0,     5,     0,
       0,   401,     0,     0,     0,     0,     7,     2,     0,     9,
       0,     0,     0,    11,    12,     0,    18,     0,    15,    16,
     301,     0,   302,     5,   303,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     9,     1,     0,     2,    11,     0,
       0,    18,     0,    15,    16,     0,     0,     0,     0,     0,
       3,     0,     4,     5,     6,     0,     0,     0,     0,     0,
       1,     7,     2,     8,     9,     0,    18,    10,    11,    12,
      13,    14,     0,    15,    16,     3,     0,     0,     5,     0,
       0,     0,    17,     0,     0,     0,     7,     2,     0,     9,
       0,    18,     0,    11,    12,     0,     0,     0,    15,    16,
     301,     0,   302,     5,   303,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     9,     0,     0,     0,    11,     0,
       0,    18,     0,    15,    16,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18
};

static const yytype_int16 yycheck[] =
{
       7,     9,    10,     0,    12,    13,    20,    14,    16,    35,
     104,    18,   200,   201,   107,   232,   258,    11,   156,   156,
     156,     4,    65,     4,   245,    13,   156,   156,   156,    99,
      78,    49,    11,    79,    80,    81,   308,     4,     4,     4,
      60,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     4,   148,    62,   156,    65,    53,    94,
       5,    96,    53,    32,   202,   202,   202,    11,    89,    11,
      90,    89,    93,   202,   202,    93,    11,    38,    61,    11,
      61,   162,   163,    49,   165,   166,   167,   168,   169,   170,
      59,   156,   156,    11,    61,    61,    61,   369,    59,    94,
      45,    95,   202,    94,   147,   199,   348,    33,    34,   330,
      61,    94,    93,   161,   122,   123,    95,   124,   126,   127,
     258,   258,   258,   261,   261,   261,   343,   197,   258,   258,
     258,   261,   261,   261,   122,   123,     9,   202,   202,   147,
     233,    35,   150,   189,   190,   191,   192,   193,   194,    67,
      11,    95,     0,    47,     7,   101,   102,   381,   258,   156,
      61,   261,    35,   244,    94,    18,    96,    31,    32,   263,
     308,   308,   308,    91,    47,     0,   314,   314,   314,   308,
     308,   405,   196,    93,    94,   314,   314,   195,    45,   270,
     198,   272,    95,   258,   258,    11,   261,   261,    94,   420,
      96,    94,   296,   211,   425,   212,   394,    49,   308,    62,
     348,   348,   348,    16,   314,    71,    72,    99,   348,   348,
     348,    89,   230,   100,   232,    93,    94,   235,   236,   326,
     327,   369,   369,   369,    73,    91,    92,   326,   327,    61,
     369,   369,    94,   308,   308,   185,   186,   103,   348,   314,
     314,   187,   188,     4,   262,    22,   349,    94,    94,    61,
      94,   258,    11,    11,   261,    96,   360,     3,     4,   369,
      11,    95,     8,    94,    10,    11,     4,    13,    14,    15,
     294,    53,    32,   348,   348,     3,    11,   295,   382,     4,
       8,     4,    10,    11,    94,    13,    14,    15,    96,    94,
      89,    95,   396,    96,   369,   369,    15,    94,    17,    18,
      19,    20,    21,    96,   408,   323,    94,    61,   412,    61,
      22,    57,    98,    34,   332,    61,     3,    61,    61,    61,
      61,     8,    96,    10,    11,   343,    13,    14,    15,    57,
      94,    68,     3,   351,    96,     3,   372,    33,    11,    22,
       8,   348,    10,    11,    93,    13,    14,    15,    94,    95,
       3,    33,     3,   371,    94,    91,   231,    96,   104,   105,
     106,   387,    63,   371,   207,   357,    94,    95,   418,   209,
      57,   356,   106,   300,     5,   314,   104,   105,   106,   397,
      67,   242,   394,    51,   337,   402,     3,   321,   261,    57,
     159,     8,   160,    10,    11,     3,    13,    14,    15,   171,
       8,   184,    10,    11,    91,    13,    14,    15,   183,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,   104,   105,   106,
       8,    -1,    10,    11,    -1,    13,    14,    15,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      57,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    57,
       8,    -1,    10,    11,     3,    13,    14,    15,    -1,     8,
      -1,    10,    11,    -1,    13,    14,    15,    -1,    -1,    57,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    95,     8,
      -1,    10,    11,    91,    13,    14,    15,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,     3,   104,   105,   106,    57,
       8,    -1,    10,    11,    -1,    13,    14,    15,    57,    97,
      -1,    -1,    -1,    -1,     3,    -1,   104,   105,   106,     8,
      -1,    10,    11,    -1,    13,    14,    15,    -1,    57,    -1,
      -1,     5,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    57,
      24,    -1,    26,    27,    28,   104,   105,   106,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    47,    48,   104,   105,   106,    -1,    -1,
      -1,    -1,    56,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,   104,   105,   106,    69,
      70,     5,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
      24,    95,    26,    27,    28,    -1,     5,    -1,    98,    -1,
       9,    35,    11,    37,    38,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    47,    48,    24,    -1,    -1,    27,    -1,
      -1,     5,    56,    -1,    -1,    -1,    35,    11,    -1,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      24,    -1,    26,    27,    28,    -1,     5,    -1,    -1,    -1,
       9,    35,    11,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    95,    -1,    47,    48,    24,    -1,    -1,    27,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    35,    11,    -1,    38,
      -1,    -1,    -1,    42,    43,    -1,    95,    -1,    47,    48,
      24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    38,     9,    -1,    11,    42,    -1,
      -1,    95,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
       9,    35,    11,    37,    38,    -1,    95,    41,    42,    43,
      44,    45,    -1,    47,    48,    24,    -1,    -1,    27,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    35,    11,    -1,    38,
      -1,    95,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    95,    -1,    47,    48,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    24,    26,    27,    28,    35,    37,    38,
      41,    42,    43,    44,    45,    47,    48,    56,    95,   108,
     111,   112,   113,   114,   115,   123,   124,   130,   131,   132,
     133,   139,   140,   146,   154,   156,   157,   158,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   174,    11,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      95,     9,    35,    47,    11,   147,    11,   168,   169,    11,
     173,     3,     8,    10,    11,    13,    14,    15,    57,   104,
     105,   106,   177,   178,   179,   180,   181,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    11,   176,   177,     4,
      61,   109,   177,   176,   169,    11,    95,   125,   126,   127,
     128,   147,   177,   177,    11,   175,   168,     0,   112,   115,
      61,   157,    89,    93,    94,    49,    89,    93,    95,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     149,   150,   177,    11,   168,   125,    11,    95,   148,   149,
      53,    94,   180,   199,   199,   199,     4,    61,   161,    38,
      59,    16,    53,    54,    57,    62,    63,    64,    65,    69,
      70,    98,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    99,   100,   101,   102,    60,    90,    71,
      72,    91,    92,   103,    73,    94,   111,     4,    33,    34,
     134,   135,     4,    61,   143,   109,   127,    94,   161,    94,
      11,    95,    22,    61,   155,    94,    96,   176,   176,   169,
      11,   177,   177,    11,   118,   119,   120,   121,   122,    96,
      94,    95,    53,    93,    11,    67,    91,   149,   151,   152,
     153,   109,    94,    51,    97,   141,   142,   177,    11,   115,
     123,   124,   130,   139,   140,   146,   154,   158,   162,   163,
     164,     4,    31,    32,   159,   160,   178,   179,   180,   193,
      57,   193,    53,   193,   193,   193,   193,   193,   193,   194,
     195,   196,   197,   197,   198,   198,   199,   199,   199,   199,
     199,   199,   177,     5,   111,    91,   137,   177,   109,   160,
     160,    24,    26,    28,   123,   124,   130,   140,   144,   145,
     146,   154,   158,   164,     4,    96,   126,   128,   129,   177,
     169,     4,    11,    89,    93,    96,    94,    94,   177,   118,
     141,   161,    89,   177,   177,    96,    96,    94,    11,   151,
      95,   193,   143,    94,    61,     5,   163,    61,   162,   177,
     109,    32,   193,   193,   110,     5,   177,   109,    22,   136,
      34,   138,   138,    61,    61,    61,     5,   145,    61,   144,
      96,    94,   156,   177,    15,    17,    18,    19,    20,    21,
     117,    68,   116,   119,   120,   119,   120,    96,   143,   177,
     153,     3,   141,     5,   161,   177,   136,    33,   134,    11,
     109,     5,    22,   129,     5,    93,   117,   109,   116,    94,
     159,   160,    93,   109,   169,   117,   109,     3,   109,    94,
      96,    33,   135,     3,   143,    96,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   110,   109,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   118,   118,
     118,   119,   119,   119,   120,   120,   120,   121,   121,   122,
     122,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   129,   129,   129,   130,   130,   130,   131,
     132,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   152,   152,
     153,   153,   153,   154,   155,   156,   156,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     169,   170,   170,   171,   172,   173,   173,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     196,   197,   197,   197,   198,   198,   198,   198,   198,   198,
     199,   199,   199,   199,   200,   200,   201,   201,   201,   201,
     201,   201,   201
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     0,     4,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     8,
       0,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     3,     3,     3,     3,     1,     3,     5,     1,
       3,     4,     3,     5,     3,     1,     1,     3,     3,     1,
       6,     1,     3,     0,     1,     3,     1,     1,     1,     5,
       5,     4,     3,     4,     5,     7,     0,     2,     0,     2,
       0,     2,     3,     5,     6,    10,    12,     1,     3,     2,
       1,     4,     3,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     4,     1,     2,     0,     3,
       3,     3,     1,     0,     1,     1,     3,     1,     1,     3,
       3,     2,     2,     3,     4,     1,     2,     3,     4,     4,
       4,     4,     0,     2,     4,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     1,     3,     2,     1,     3,
       1,     3,     5,     1,     3,     1,     3,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 71 "parser.y" /* yacc.c:1646  */
    {}
#line 1752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 72 "parser.y" /* yacc.c:1646  */
    {

	printf("end of statement \n");
}
#line 1761 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 81 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[-1].astNode);
    }
#line 1769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "parser.y" /* yacc.c:1646  */
    {}
#line 1775 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[-2].astNode);
    }
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[0].astNode);
        }
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "parser.y" /* yacc.c:1646  */
    {
(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); 
(yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 104 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode) = new StatementsNode("Statements");
(yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 1809 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "parser.y" /* yacc.c:1646  */
    {}
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 114 "parser.y" /* yacc.c:1646  */
    {}
#line 1821 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 116 "parser.y" /* yacc.c:1646  */
    {
std::string name = "return statement" + std::to_string(n_nodes);
++n_nodes;
(yyval.astNode)=(yyvsp[0].astNode); }
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 120 "parser.y" /* yacc.c:1646  */
    {}
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 121 "parser.y" /* yacc.c:1646  */
    {}
#line 1842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 122 "parser.y" /* yacc.c:1646  */
    {}
#line 1848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 123 "parser.y" /* yacc.c:1646  */
    {}
#line 1854 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "parser.y" /* yacc.c:1646  */
    {}
#line 1860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "parser.y" /* yacc.c:1646  */
    {}
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "parser.y" /* yacc.c:1646  */
    {}
#line 1872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "parser.y" /* yacc.c:1646  */
    {}
#line 1878 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("Function successfully parsed:\n");}
#line 1884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "parser.y" /* yacc.c:1646  */
    {}
#line 1890 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "parser.y" /* yacc.c:1646  */
    {}
#line 1896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "parser.y" /* yacc.c:1646  */
    {}
#line 1902 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 135 "parser.y" /* yacc.c:1646  */
    {}
#line 1908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 136 "parser.y" /* yacc.c:1646  */
    {}
#line 1914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 137 "parser.y" /* yacc.c:1646  */
    {}
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "parser.y" /* yacc.c:1646  */
    {
        printf("Function successfully parsed:\n");
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
(yyval.astNode) = new FunctionNode(idFunc->value);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
root = (yyval.astNode);
YYACCEPT;
        }
#line 1936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 161 "parser.y" /* yacc.c:1646  */
    {
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
(yyval.astNode) = new FunctionNode(idFunc->value);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
root = (yyval.astNode);
        }
#line 1950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL;}
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode);}
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "parser.y" /* yacc.c:1646  */
    {
(yyvsp[-2].astNode)->add((yyvsp[0].astNode));
(yyval.astNode)=(yyvsp[-2].astNode);
                       }
#line 1971 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 202 "parser.y" /* yacc.c:1646  */
    {

                       }
#line 1979 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 206 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode) = new Args("Args"); 
(yyval.astNode)->add((yyvsp[0].astNode));
                       }
#line 1988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 217 "parser.y" /* yacc.c:1646  */
    {
std::string nname = "iden" + std::to_string(n_nodes);
++n_nodes;
(yyvsp[0].astNode)->name=nname;
(yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 1999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("function call \n");}
#line 2005 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("with statement \n");}
#line 2011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("ASYNC with statement \n");}
#line 2017 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 267 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2023 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 268 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2029 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 269 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2035 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 297 "parser.y" /* yacc.c:1646  */
    { printf("while statement \n"); }
#line 2041 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 302 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2047 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 303 "parser.y" /* yacc.c:1646  */
    { printf("for ASYNC statement \n"); }
#line 2053 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 304 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2059 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 305 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2065 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 317 "parser.y" /* yacc.c:1646  */
    {}
#line 2071 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 318 "parser.y" /* yacc.c:1646  */
    {}
#line 2077 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 327 "parser.y" /* yacc.c:1646  */
    {}
#line 2083 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 328 "parser.y" /* yacc.c:1646  */
    {}
#line 2089 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 329 "parser.y" /* yacc.c:1646  */
    {}
#line 2095 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 330 "parser.y" /* yacc.c:1646  */
    {}
#line 2101 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 331 "parser.y" /* yacc.c:1646  */
    {}
#line 2107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 333 "parser.y" /* yacc.c:1646  */
    {}
#line 2113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 334 "parser.y" /* yacc.c:1646  */
    {}
#line 2119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 335 "parser.y" /* yacc.c:1646  */
    {}
#line 2125 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 336 "parser.y" /* yacc.c:1646  */
    {}
#line 2131 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("class definition \n");}
#line 2137 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 349 "parser.y" /* yacc.c:1646  */
    {}
#line 2143 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 350 "parser.y" /* yacc.c:1646  */
    {}
#line 2149 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 351 "parser.y" /* yacc.c:1646  */
    {}
#line 2155 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 352 "parser.y" /* yacc.c:1646  */
    {}
#line 2161 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 357 "parser.y" /* yacc.c:1646  */
    {}
#line 2167 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 362 "parser.y" /* yacc.c:1646  */
    {}
#line 2173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 363 "parser.y" /* yacc.c:1646  */
    {}
#line 2179 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 367 "parser.y" /* yacc.c:1646  */
    { }
#line 2185 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 371 "parser.y" /* yacc.c:1646  */
    {}
#line 2191 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 372 "parser.y" /* yacc.c:1646  */
    {}
#line 2197 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 376 "parser.y" /* yacc.c:1646  */
    { }
#line 2203 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 377 "parser.y" /* yacc.c:1646  */
    {}
#line 2209 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 378 "parser.y" /* yacc.c:1646  */
    {}
#line 2215 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 382 "parser.y" /* yacc.c:1646  */
    { printf("match statement \n"); }
#line 2221 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 397 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2227 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 398 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2233 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 412 "parser.y" /* yacc.c:1646  */
    {}
#line 2239 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 413 "parser.y" /* yacc.c:1646  */
    {}
#line 2245 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 422 "parser.y" /* yacc.c:1646  */
    {}
#line 2251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 423 "parser.y" /* yacc.c:1646  */
    {}
#line 2257 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 424 "parser.y" /* yacc.c:1646  */
    {}
#line 2263 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 425 "parser.y" /* yacc.c:1646  */
    {}
#line 2269 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 426 "parser.y" /* yacc.c:1646  */
    {}
#line 2275 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 428 "parser.y" /* yacc.c:1646  */
    {}
#line 2281 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 429 "parser.y" /* yacc.c:1646  */
    {}
#line 2287 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 430 "parser.y" /* yacc.c:1646  */
    {}
#line 2293 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 431 "parser.y" /* yacc.c:1646  */
    {}
#line 2299 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 437 "parser.y" /* yacc.c:1646  */
    { }
#line 2305 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 438 "parser.y" /* yacc.c:1646  */
    { }
#line 2311 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 439 "parser.y" /* yacc.c:1646  */
    {}
#line 2317 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 486 "parser.y" /* yacc.c:1646  */
    {  printf("return statement \n ");  }
#line 2323 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 488 "parser.y" /* yacc.c:1646  */
    {
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
(yyval.astNode)=new ReturnStatementNode((yyvsp[0].astNode));
      }
#line 2333 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 497 "parser.y" /* yacc.c:1646  */
    {  printf("yield statement \n ");  }
#line 2339 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 501 "parser.y" /* yacc.c:1646  */
    {  printf("global statement \n ");  }
#line 2345 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 509 "parser.y" /* yacc.c:1646  */
    {  printf("nonlocal statement \n ");  }
#line 2351 "parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 532 "parser.y" /* yacc.c:1646  */
    { }
#line 2357 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 539 "parser.y" /* yacc.c:1646  */
    { }
#line 2363 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 546 "parser.y" /* yacc.c:1646  */
    {  }
#line 2369 "parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 572 "parser.y" /* yacc.c:1646  */
    { }
#line 2375 "parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 576 "parser.y" /* yacc.c:1646  */
    {    }
#line 2381 "parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 580 "parser.y" /* yacc.c:1646  */
    {   }
#line 2387 "parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 584 "parser.y" /* yacc.c:1646  */
    {  }
#line 2393 "parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 588 "parser.y" /* yacc.c:1646  */
    {}
#line 2399 "parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 592 "parser.y" /* yacc.c:1646  */
    {}
#line 2405 "parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 596 "parser.y" /* yacc.c:1646  */
    { }
#line 2411 "parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 600 "parser.y" /* yacc.c:1646  */
    {  }
#line 2417 "parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 604 "parser.y" /* yacc.c:1646  */
    {  }
#line 2423 "parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 608 "parser.y" /* yacc.c:1646  */
    {  }
#line 2429 "parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 615 "parser.y" /* yacc.c:1646  */
    {  }
#line 2435 "parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 622 "parser.y" /* yacc.c:1646  */
    { }
#line 2441 "parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 628 "parser.y" /* yacc.c:1646  */
    {}
#line 2447 "parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 634 "parser.y" /* yacc.c:1646  */
    {}
#line 2453 "parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 635 "parser.y" /* yacc.c:1646  */
    {}
#line 2459 "parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 644 "parser.y" /* yacc.c:1646  */
    {}
#line 2465 "parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 645 "parser.y" /* yacc.c:1646  */
    { }
#line 2471 "parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 652 "parser.y" /* yacc.c:1646  */
    {}
#line 2477 "parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 653 "parser.y" /* yacc.c:1646  */
    {}
#line 2483 "parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 654 "parser.y" /* yacc.c:1646  */
    {}
#line 2489 "parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 655 "parser.y" /* yacc.c:1646  */
    {}
#line 2495 "parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 656 "parser.y" /* yacc.c:1646  */
    {}
#line 2501 "parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 673 "parser.y" /* yacc.c:1646  */
    {}
#line 2507 "parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 679 "parser.y" /* yacc.c:1646  */
    { }
#line 2513 "parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 680 "parser.y" /* yacc.c:1646  */
    { }
#line 2519 "parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 681 "parser.y" /* yacc.c:1646  */
    { }
#line 2525 "parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 682 "parser.y" /* yacc.c:1646  */
    { }
#line 2531 "parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 683 "parser.y" /* yacc.c:1646  */
    { }
#line 2537 "parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 684 "parser.y" /* yacc.c:1646  */
    { }
#line 2543 "parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 685 "parser.y" /* yacc.c:1646  */
    {}
#line 2549 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2553 "parser.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 690 "parser.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
 
     if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();

      // AST is constructed, you can print it now
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}



void yyerror(const char *msg) {
      printf(" %s \n", msg);
}
