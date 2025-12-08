/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "BISON.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer[2048];
int indent_level = 0;
int yylex(void);
void yyerror(const char *s);

/* Line 371 of yacc.c  */
#line 79 "BISON.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "BISON.tab.h".  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CALLHERCULES = 258,
     INCLUDE = 259,
     INTVAL = 260,
     FLOATVAL = 261,
     CHARVAL = 262,
     STRVAL = 263,
     BOOLVAL = 264,
     VARIABLE = 265,
     INT_TYPE = 266,
     FLOAT_TYPE = 267,
     STRING_TYPE = 268,
     CHAR_TYPE = 269,
     BOOL_TYPE = 270,
     VOID_TYPE = 271,
     IF = 272,
     ELSEIF = 273,
     ELSE = 274,
     RET = 275,
     CALL = 276,
     LARC = 277,
     RARC = 278,
     LBRACE = 279,
     RBRACE = 280,
     WHILE = 281,
     FOR = 282,
     PRINT = 283,
     PRECYCLE = 284,
     POWER = 285,
     GE = 286,
     LE = 287,
     EQ = 288,
     NE = 289,
     GT = 290,
     LT = 291,
     ASSIGN = 292,
     ADD = 293,
     SUB = 294,
     MUL = 295,
     DIV = 296,
     SEPARATOR = 297,
     ENUMERATOR = 298,
     COLON = 299,
     SPELL = 300,
     RETURN = 301,
     STAFF = 302,
     LEARNSPELL = 303,
     UNKNOWN = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "BISON.y"

	char* str;


/* Line 387 of yacc.c  */
#line 176 "BISON.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 204 "BISON.tab.c"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    17,    20,    23,
      26,    29,    31,    33,    35,    37,    39,    41,    43,    46,
      48,    50,    53,    59,    65,    71,    77,    83,    95,    97,
      99,   108,   113,   118,   120,   125,   127,   130,   133,   136,
     139,   144,   146,   149,   153,   156,   159,   163,   165,   168,
     172,   175,   177,   181,   183,   187,   190,   193,   196,   199,
     202,   204,   206,   208,   210,   214,   218,   220,   224,   228,
     235,   237,   239,   243,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    53,    -1,    24,    53,    25,    -1,    54,
      -1,    53,    54,    -1,    77,    42,    -1,    73,    42,    -1,
      75,    42,    -1,    74,    42,    -1,    68,    42,    -1,    65,
      -1,    60,    -1,    61,    -1,    62,    -1,    57,    -1,    52,
      -1,    56,    -1,    55,    42,    -1,     3,    -1,     4,    -1,
      64,    42,    -1,    28,    22,    77,    11,    23,    -1,    28,
      22,    77,    12,    23,    -1,    28,    22,    77,    13,    23,
      -1,    28,    22,    77,    14,    23,    -1,    28,    22,    77,
      15,    23,    -1,    29,    22,    63,    42,    71,    42,    63,
      42,    72,    23,    52,    -1,    58,    -1,    59,    -1,    27,
      22,    71,    42,    63,    42,    72,    23,    -1,    26,    22,
      63,    23,    -1,    18,    22,    63,    23,    -1,    19,    -1,
      17,    22,    63,    23,    -1,    77,    -1,    46,    16,    -1,
      46,    68,    -1,    46,    77,    -1,    66,    67,    -1,    48,
      85,    47,    10,    -1,    83,    -1,    22,    75,    -1,    67,
      43,    75,    -1,    67,    23,    -1,    69,    70,    -1,    45,
      47,    10,    -1,    83,    -1,    22,    82,    -1,    70,    43,
      82,    -1,    70,    23,    -1,    73,    -1,    71,    43,    72,
      -1,    74,    -1,    72,    43,    74,    -1,    76,    75,    -1,
      76,    10,    -1,    10,    85,    -1,    77,    37,    -1,    68,
      37,    -1,    78,    -1,    81,    -1,    79,    -1,    80,    -1,
      79,    39,    80,    -1,    79,    38,    80,    -1,    82,    -1,
      80,    40,    82,    -1,    80,    41,    82,    -1,    86,    22,
      82,    43,    82,    23,    -1,    84,    -1,    10,    -1,    22,
      77,    23,    -1,    22,    23,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    11,    -1,    12,    -1,
      14,    -1,    13,    -1,    15,    -1,    16,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    55,    59,    62,    65,    68,    71,    74,
      77,    80,    83,    86,    89,    92,    95,    98,   101,   104,
     107,   110,   116,   121,   126,   131,   136,   143,   152,   155,
     158,   164,   170,   173,   176,   179,   185,   188,   191,   195,
     198,   201,   204,   207,   210,   215,   218,   221,   224,   227,
     230,   236,   239,   242,   245,   248,   251,   254,   257,   260,
     266,   269,   274,   277,   280,   283,   286,   289,   292,   297,
     302,   305,   308,   311,   315,   318,   321,   324,   327,   331,
     334,   337,   340,   343,   346,   349,   352,   355,   358,   361,
     364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CALLHERCULES", "INCLUDE", "INTVAL",
  "FLOATVAL", "CHARVAL", "STRVAL", "BOOLVAL", "VARIABLE", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "CHAR_TYPE", "BOOL_TYPE", "VOID_TYPE", "IF",
  "ELSEIF", "ELSE", "RET", "CALL", "LARC", "RARC", "LBRACE", "RBRACE",
  "WHILE", "FOR", "PRINT", "PRECYCLE", "POWER", "GE", "LE", "EQ", "NE",
  "GT", "LT", "ASSIGN", "ADD", "SUB", "MUL", "DIV", "SEPARATOR",
  "ENUMERATOR", "COLON", "SPELL", "RETURN", "STAFF", "LEARNSPELL",
  "UNKNOWN", "$accept", "program", "BLOCK", "STATEMENTS", "STATEMENT",
  "CONSOLE_OUTPUT", "PYCLE", "LOOP", "COUNTFROM", "ASLONGAS", "NORKFORK",
  "NORK", "FORK", "CONDITION", "RET_VAL", "FUNC_HEADER_WITH_PARAMS",
  "FUNC_HEADER", "FUNC_HEADER_PARAMS", "FUNC_CALL_WITH_ARGS",
  "FUNC_CALL_PART", "FUNC_CALL_ARGS", "FULL_PARTIAL_INITS",
  "PARTIAL_INITS", "FULL_INIT", "PARTIAL_INIT", "VAR_DECLARE",
  "VALUE_ASSIGN", "EXPR", "MATH_EXPR", "SUBADD", "MULDIV", "BOOL_EXPR",
  "ATOM", "ARCS", "VALUE", "TYPE", "COMPARE_OPER", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    56,    57,    57,
      58,    59,    60,    61,    62,    63,    64,    64,    64,    65,
      66,    67,    67,    67,    67,    68,    69,    70,    70,    70,
      70,    71,    71,    72,    72,    73,    74,    75,    76,    76,
      77,    77,    78,    79,    79,    79,    80,    80,    80,    81,
      82,    82,    82,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     5,     5,     5,     5,     5,    11,     1,     1,
       8,     4,     4,     1,     4,     1,     2,     2,     2,     2,
       4,     1,     2,     3,     2,     2,     3,     1,     2,     3,
       2,     1,     3,     1,     3,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     6,
       1,     1,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    20,    74,    75,    76,    77,    78,    71,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,    16,     2,
       4,     0,    17,    15,    28,    29,    12,    13,    14,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      62,    63,    61,    66,    70,     0,    79,    80,    82,    81,
      83,    84,    57,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,    36,    37,    38,     0,     1,     5,    18,
      21,     0,    39,    41,    59,    10,     0,    45,    47,     7,
       9,     8,    56,    55,    58,     6,     0,     0,     0,     0,
       0,     0,    35,     0,    72,     3,     0,     0,     0,    51,
       0,     0,     0,     0,    46,     0,     0,    73,    42,    44,
       0,    48,    50,     0,    65,    64,    67,    68,     0,    34,
      32,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    43,    49,     0,     0,    52,    53,     0,    22,    23,
      24,    25,    26,     0,     0,     0,     0,    56,     0,    69,
       0,    54,     0,    30,     0,     0,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   101,    39,    40,    41,    82,   107,    43,
      87,   108,   145,    44,    45,    46,    47,   102,    49,    50,
      51,    52,    53,    83,    54,    62,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
     141,  -129,  -129,  -129,  -129,  -129,  -129,  -129,    42,   -13,
      12,  -129,   224,   141,    21,    30,    40,    46,  -129,  -129,
    -129,  -129,  -129,  -129,    27,   174,    42,    77,  -129,   141,
    -129,    44,  -129,  -129,  -129,  -129,  -129,  -129,  -129,    53,
    -129,    69,   -16,    83,    80,    90,    94,   127,   -14,  -129,
      22,    49,  -129,  -129,  -129,   116,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   224,   224,  -129,   117,    75,   224,   192,
     224,   224,   131,  -129,  -129,  -129,    95,  -129,  -129,  -129,
    -129,     7,    -5,  -129,  -129,  -129,    41,    -3,  -129,  -129,
    -129,  -129,    42,  -129,  -129,  -129,   107,   107,   107,   107,
     107,   120,  -129,   129,  -129,  -129,   130,   124,    76,  -129,
     144,   125,   113,   115,  -129,   156,    42,  -129,  -129,  -129,
     144,  -129,  -129,   107,    49,    49,  -129,  -129,   128,  -129,
    -129,  -129,   224,   192,   155,   162,   165,   168,   169,   192,
    -129,  -129,  -129,   107,   151,   152,  -129,   184,  -129,  -129,
    -129,  -129,  -129,    88,   180,   192,   192,  -129,   224,  -129,
      -1,  -129,   170,  -129,   192,     1,   187,  -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,    47,   191,   -22,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   -60,  -129,  -129,  -129,  -129,     6,  -129,
    -129,    78,  -128,   -64,  -123,   -44,   -68,     0,  -129,  -129,
      38,  -129,   -84,   172,  -129,   190,  -129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,   110,   121,    93,   103,   109,    42,    78,   106,    63,
     146,   113,    66,    48,   126,   127,   128,   116,   119,    42,
     122,    84,   163,    94,   166,    75,    85,   160,    95,    48,
     117,    74,   146,   161,    64,    42,   165,   118,   120,   142,
     123,   146,   156,    68,   156,    78,     3,     4,     5,     6,
       7,    65,    69,    56,    57,    58,    59,    60,    61,   154,
      96,    97,    70,    12,   117,   147,    93,    48,    71,   111,
     112,   110,   144,    42,    72,   109,   141,    77,     1,     2,
       3,     4,     5,     6,     7,     8,    79,   147,   147,    98,
      99,    81,     9,    10,    11,    80,   147,    12,   162,    13,
     105,    14,    15,    16,    17,    86,    18,    19,    20,    21,
      22,    23,     3,     4,     5,     6,     7,    65,   132,   133,
      24,    25,    89,    26,   134,   135,   136,   137,   138,    12,
     158,   133,    90,   111,   124,   125,    91,    92,   100,   111,
     104,   114,   115,   129,     1,     2,     3,     4,     5,     6,
       7,     8,   130,   131,   116,   111,   111,   139,     9,    10,
      11,    84,    94,    12,   111,    13,   140,    14,    15,    16,
      17,   143,    18,    19,    20,    21,    22,    23,   148,     3,
       4,     5,     6,     7,    65,   149,    24,    25,   150,    26,
      73,   151,   152,   155,   157,   156,    12,     3,     4,     5,
       6,     7,    65,   159,    67,    18,    19,    20,    21,    22,
      23,    13,   164,   167,    12,    88,    76,   153,     0,    24,
       0,     0,     0,    18,    19,    20,    21,    22,    23,     3,
       4,     5,     6,     7,    65,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
      23
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    69,    86,    47,    64,    69,     0,    29,    68,    22,
     133,    71,    12,    13,    98,    99,   100,    10,    23,    13,
      23,    37,    23,    37,    23,    25,    42,   155,    42,    29,
      23,    25,   155,   156,    22,    29,   164,    81,    43,   123,
      43,   164,    43,    22,    43,    67,     5,     6,     7,     8,
       9,    10,    22,    11,    12,    13,    14,    15,    16,   143,
      38,    39,    22,    22,    23,   133,   110,    67,    22,    69,
      70,   139,   132,    67,    47,   139,   120,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    42,   155,   156,    40,
      41,    22,    17,    18,    19,    42,   164,    22,   158,    24,
      25,    26,    27,    28,    29,    22,    31,    32,    33,    34,
      35,    36,     5,     6,     7,     8,     9,    10,    42,    43,
      45,    46,    42,    48,    11,    12,    13,    14,    15,    22,
      42,    43,    42,   133,    96,    97,    42,    10,    22,   139,
      23,    10,    47,    23,     3,     4,     5,     6,     7,     8,
       9,    10,    23,    23,    10,   155,   156,    42,    17,    18,
      19,    37,    37,    22,   164,    24,    10,    26,    27,    28,
      29,    43,    31,    32,    33,    34,    35,    36,    23,     5,
       6,     7,     8,     9,    10,    23,    45,    46,    23,    48,
      16,    23,    23,    42,    10,    43,    22,     5,     6,     7,
       8,     9,    10,    23,    13,    31,    32,    33,    34,    35,
      36,    24,    42,   166,    22,    43,    26,   139,    -1,    45,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,     5,
       6,     7,     8,     9,    10,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    17,
      18,    19,    22,    24,    26,    27,    28,    29,    31,    32,
      33,    34,    35,    36,    45,    46,    48,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    64,
      65,    66,    68,    69,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    86,    11,    12,    13,    14,
      15,    16,    85,    22,    22,    10,    77,    53,    22,    22,
      22,    22,    47,    16,    68,    77,    85,     0,    54,    42,
      42,    22,    67,    83,    37,    42,    22,    70,    83,    42,
      42,    42,    10,    75,    37,    42,    38,    39,    40,    41,
      22,    63,    77,    63,    23,    25,    63,    68,    71,    73,
      76,    77,    77,    63,    10,    47,    10,    23,    75,    23,
      43,    82,    23,    43,    80,    80,    82,    82,    82,    23,
      23,    23,    42,    43,    11,    12,    13,    14,    15,    42,
      10,    75,    82,    43,    63,    72,    74,    76,    23,    23,
      23,    23,    23,    71,    82,    42,    43,    10,    42,    23,
      72,    74,    63,    23,    42,    72,    23,    52
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
/* Line 1792 of yacc.c  */
#line 52 "BISON.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 56 "BISON.y"
    { sprintf(buffer, "%s\n%s\n%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 60 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 63 "BISON.y"
    { sprintf(buffer, "%s\n%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); free((yyvsp[(1) - (2)].str)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 66 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 69 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 72 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 75 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 78 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 81 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 84 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 87 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 90 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 93 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 96 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 99 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 102 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 105 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 108 "BISON.y"
    { sprintf(buffer, "#include %s", (yyvsp[(1) - (1)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 111 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 117 "BISON.y"
    { 
		sprintf(buffer, "printf(\"%%d\\n\", %s)", (yyvsp[(3) - (5)].str)); (yyval.str) = strdup(buffer); 
	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 122 "BISON.y"
    { 
		sprintf(buffer, "printf(\"%%f\\n\", %s)", (yyvsp[(3) - (5)].str)); (yyval.str) = strdup(buffer); 
	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 127 "BISON.y"
    { 
		sprintf(buffer, "printf(\"%%s\\n\", %s)", (yyvsp[(3) - (5)].str)); (yyval.str) = strdup(buffer); 
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 132 "BISON.y"
    { 
		sprintf(buffer, "printf(\"%%c\\n\", %s)", (yyvsp[(3) - (5)].str)); (yyval.str) = strdup(buffer);
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 137 "BISON.y"
    { 
		sprintf(buffer, "printf(\"%%d\\n\", %s)", (yyvsp[(3) - (5)].str)); (yyval.str) = strdup(buffer);
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 144 "BISON.y"
    { 
		sprintf(buffer, "if%s%s%s\n{\nfor%s%s%s%s%s%s%s\n%s\n}", (yyvsp[(2) - (11)].str), (yyvsp[(3) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(2) - (11)].str), (yyvsp[(5) - (11)].str), (yyvsp[(6) - (11)].str), (yyvsp[(7) - (11)].str), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));
		(yyval.str) = strdup(buffer); 
	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 153 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 156 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 159 "BISON.y"
    { 
		sprintf(buffer, "%s%s%s%s%s%s%s%s", (yyvsp[(1) - (8)].str), (yyvsp[(2) - (8)].str), (yyvsp[(3) - (8)].str), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].str), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str)); 
		(yyval.str) = strdup(buffer); 
	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 165 "BISON.y"
    { sprintf(buffer, "%s%s%s%s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 171 "BISON.y"
    { sprintf(buffer, "%s%s%s%s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 174 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 177 "BISON.y"
    { sprintf(buffer, "%s%s%s%s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 180 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 186 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (2)].str);  }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 189 "BISON.y"
    { sprintf(buffer, "%s %s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 192 "BISON.y"
    { sprintf(buffer, "%s %s", (yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 196 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 199 "BISON.y"
    { sprintf(buffer, "%s %s", (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 202 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 205 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 208 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 211 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 216 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 219 "BISON.y"
    { sprintf(buffer, "%s", (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 222 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 225 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 228 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 231 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 237 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 240 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 243 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 246 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 249 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 252 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 255 "BISON.y"
    { sprintf(buffer, "%s %s", (yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 258 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 261 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 267 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 270 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 275 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 278 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 281 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 284 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 287 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 290 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 293 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 298 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(3) - (6)].str), (yyvsp[(1) - (6)].str), (yyvsp[(5) - (6)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 303 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 306 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 309 "BISON.y"
    { sprintf(buffer, "%s%s%s", (yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 312 "BISON.y"
    { sprintf(buffer, "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); (yyval.str) = strdup(buffer); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 316 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 319 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 322 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 325 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 328 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 332 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 335 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 338 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 341 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 344 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 347 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 350 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 353 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 356 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 359 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 362 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 365 "BISON.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;


/* Line 1792 of yacc.c  */
#line 2120 "BISON.tab.c"
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


/* Line 2055 of yacc.c  */
#line 367 "BISON.y"


int main() {
	yyparse();
	return 0;
}

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s\n", s);
}
