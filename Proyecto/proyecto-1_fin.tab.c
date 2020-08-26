/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "fin.y" /* yacc.c:337  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "arb.c"
#include "gnirts.c"

int yyerror (char *s);
int yywrap();
int yylex();

CONTENIDO *D,*A,*B,*C,*E,*X, *F, *DD;
int i=1;
ARBOLBINARIO raiz=NULL;

#line 86 "fin.tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "fin.tab.h".  */
#ifndef YY_YY_FIN_TAB_H_INCLUDED
# define YY_YY_FIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MOD = 258,
    POW = 259,
    ENTERO = 260,
    DECIMAL = 261,
    CADENA = 262,
    INT = 263,
    DOUBLE = 264,
    STRING = 265,
    IMP = 266,
    IF = 267,
    VARIABLE = 268,
    VACIO = 269
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "fin.y" /* yacc.c:352  */

	int entero;
	double decimal;
	char * cadena, * res, *va;
	

#line 151 "fin.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FIN_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

#define YYUNDEFTOK  2
#define YYMAXUTOK   269

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      19,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      20,    22,    17,    15,    21,    16,     2,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      25,    24,    26,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    49,    50,    51,    52,    53,    54,
      55,    56,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    85,    86,    87,    88,    89,    94,    95,   103,   104,
     105,   106,  1108,  1159,  1209,  1230,  1259,  1278,  1305,  1325,
    1348,  1372,  1395,  1416,  1531,  1562,  1562,  1620,  1647,  1674,
    1739,  1862
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MOD", "POW", "ENTERO", "DECIMAL",
  "CADENA", "INT", "DOUBLE", "STRING", "IMP", "IF", "VARIABLE", "VACIO",
  "'+'", "'-'", "'*'", "'/'", "'\\n'", "'('", "','", "')'", "';'", "'='",
  "'<'", "'>'", "$accept", "input", "line", "expd", "exp", "cad", "resi",
  "resd", "ress", "asig", "$@1", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    43,    45,    42,    47,    10,
      40,    44,    41,    59,    61,    60,    62
};
# endif

#define YYPACT_NINF -25

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-25)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,    89,   -25,    32,    49,   -25,   -25,   -25,    59,    63,
      14,    30,    53,    58,   -25,   -25,   -25,     7,   233,    33,
     -25,   -25,   -25,   -25,   101,   101,    54,    67,    86,   108,
     115,   157,   -25,   158,   240,   101,   101,   101,   101,   101,
     101,   101,   101,   187,   186,   193,   200,   207,   -25,   -25,
       3,   -25,   -25,   101,   -25,   107,   165,    98,   117,    24,
      28,   129,   137,   129,   137,   -25,   -25,   -25,   -25,   129,
     137,   129,   137,   -25,   -25,   -25,   -25,   153,   161,   125,
     -25,   -25,   101,   101,   101,   101,   136,   160,    39,    48,
     233,   155,     3,   163,   166,   192,   -25,   -25,   -25,   -13,
      95,   103,   111,   119,   127,   135,   143,     3,     3,     3,
       3,     3,     3,   -25,   -25,   -25,   151,    15,   177,   184,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   214,   221,
     145,   145,   -25,   -25,    52,   168,   190,   196,   197,     3,
       3,   206,   -25,   219,   204,   -25,   222,   159,   167,   210,
     220,   -25,   228,   -25,     3,   232,   175,   241,   238,   230,
     249,   244,   243,   237,   253,   239,   242,   -25,   245,   -25
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    31,    12,    38,     0,     0,
       0,     0,     0,    39,    61,     4,     3,     6,     5,     7,
       8,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
       0,    42,    46,     0,    48,     0,     0,     0,     0,     0,
       0,    13,    14,    16,    17,    19,    20,    22,    24,    15,
      32,    18,    33,    21,    34,    23,    35,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    51,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    47,    49,     0,     0,     0,     0,
      28,    30,    29,    36,    25,    27,    26,    37,     0,     0,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    54,    57,     0,     0,     0,
       0,    58,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -25,   -25,   -25,    -4,   -24,   218,   -25,   -25,   -25,   -25,
     -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    16,    17,    18,    19,    20,    21,    22,    23,
     152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    47,    35,    36,    37,    38,    86,    87,     5,   120,
      60,    62,    64,    66,    68,    70,    72,    74,    76,   135,
      44,    46,    35,    36,    37,    38,    88,    30,   136,    90,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    35,
      36,    37,    38,    39,    40,    41,    42,    97,    43,    89,
      31,    98,    24,    32,   109,   110,   111,   112,   100,   102,
     104,   106,   113,    35,    36,    37,    38,   141,   116,    25,
      26,   114,    27,    33,    28,   142,    29,    48,    99,   101,
     103,   105,    34,   128,   129,   130,   131,   132,   133,     2,
      49,    50,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,     4,     5,     6,    15,    51,
      39,    40,    41,    42,    91,   147,   148,   121,    35,    36,
      37,    38,    93,    94,    95,   122,    39,    40,    41,    42,
     156,    52,    53,   123,    35,    36,    37,    38,    54,    55,
      96,   124,    39,    40,    41,    42,    37,    38,    32,   125,
      35,    36,    37,    38,    41,    42,   107,   126,    39,    40,
      41,    42,   111,   112,    26,   127,   109,   110,   111,   112,
      56,    57,    28,   134,   109,   110,   111,   112,   115,   118,
     108,   123,   109,   110,   111,   112,    92,   117,   143,   127,
     109,   110,   111,   112,     7,    77,    78,   158,    79,   137,
      80,    35,    36,    37,    38,   119,   138,    82,    39,    40,
      41,    42,   144,   149,    83,    35,    36,    37,    38,   145,
     146,    84,    39,    40,    41,    42,   150,   151,    85,   109,
     110,   111,   112,   153,   -55,   139,   109,   110,   111,   112,
     155,   154,   140,     3,     4,     5,     6,    58,    39,    40,
      41,    42,   157,   160,   159,   161,   162,   163,   164,   165,
     166,    81,   167,     0,   168,     0,     0,     0,   169
};

static const yytype_int16 yycheck[] =
{
      24,    25,    15,    16,    17,    18,     3,     4,     5,    22,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     4,
      24,    25,    15,    16,    17,    18,    50,    13,    13,    53,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    15,
      16,    17,    18,    15,    16,    17,    18,    23,    15,    53,
      20,    23,    20,    23,    15,    16,    17,    18,    82,    83,
      84,    85,    23,    15,    16,    17,    18,    15,    92,    20,
      11,    23,    13,    20,    11,    23,    13,    23,    82,    83,
      84,    85,    24,   107,   108,   109,   110,   111,   112,     0,
      23,    24,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,     4,     5,     6,    19,    23,
      15,    16,    17,    18,     7,   139,   140,    22,    15,    16,
      17,    18,    24,    25,    26,    22,    15,    16,    17,    18,
     154,    23,    24,    22,    15,    16,    17,    18,    23,    24,
      23,    22,    15,    16,    17,    18,    17,    18,    23,    22,
      15,    16,    17,    18,    17,    18,    20,    22,    15,    16,
      17,    18,    17,    18,    11,    22,    15,    16,    17,    18,
      13,    13,    11,    22,    15,    16,    17,    18,    23,    13,
      20,    22,    15,    16,    17,    18,    21,    24,    20,    22,
      15,    16,    17,    18,     7,     8,     9,    22,    11,    22,
      13,    15,    16,    17,    18,    13,    22,    21,    15,    16,
      17,    18,    22,     7,    21,    15,    16,    17,    18,    23,
      23,    21,    15,    16,    17,    18,     7,    23,    21,    15,
      16,    17,    18,    23,    12,    21,    15,    16,    17,    18,
      12,    21,    21,     3,     4,     5,     6,     7,    15,    16,
      17,    18,    20,    15,    13,    25,     7,    13,    15,    22,
       7,    43,    23,    -1,    22,    -1,    -1,    -1,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    19,    29,    30,    31,    32,
      33,    34,    35,    36,    20,    20,    11,    13,    11,    13,
      13,    20,    23,    20,    24,    15,    16,    17,    18,    15,
      16,    17,    18,    15,    30,    31,    30,    31,    23,    23,
      24,    23,    23,    24,    23,    24,    13,    13,     7,    30,
      31,    30,    31,    30,    31,    30,    31,    30,    31,    30,
      31,    30,    31,    30,    31,    30,    31,     8,     9,    11,
      13,    32,    21,    21,    21,    21,     3,     4,    31,    30,
      31,     7,    21,    24,    25,    26,    23,    23,    23,    30,
      31,    30,    31,    30,    31,    30,    31,    20,    20,    15,
      16,    17,    18,    23,    23,    23,    31,    24,    13,    13,
      22,    22,    22,    22,    22,    22,    22,    22,    31,    31,
      31,    31,    31,    31,    22,     4,    13,    22,    22,    21,
      21,    15,    23,    20,    22,    23,    23,    31,    31,     7,
       7,    23,    37,    23,    21,    12,    31,    20,    22,    13,
      15,    25,     7,    13,    15,    22,     7,    23,    22,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    28,    28,    29,    29,    29,    29,    29,    29,
      29,    29,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    31,    31,    31,    31,    31,    31,    31,    32,    32,
      32,    32,    32,    32,    33,    33,    34,    34,    35,    35,
      36,    36,    36,    36,    36,    37,    36,    36,    36,    36,
      36,    36
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     6,     6,     6,
       6,     1,     3,     3,     3,     3,     6,     6,     1,     1,
       3,     2,     3,     3,     3,     5,     3,     5,     3,     5,
       4,     4,     4,     7,     7,     0,    15,     7,     8,    17,
       9,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 12:
#line 59 "fin.y" /* yacc.c:1652  */
    { (yyval.decimal) = (yyvsp[0].decimal); }
#line 1357 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 60 "fin.y" /* yacc.c:1652  */
    { printf("\nf(1)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) + (yyvsp[0].decimal));}
#line 1363 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 61 "fin.y" /* yacc.c:1652  */
    { printf("\nf(2)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) + (yyvsp[0].entero));}
#line 1369 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 62 "fin.y" /* yacc.c:1652  */
    { printf("\nf(3)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].entero) + (yyvsp[0].decimal));}
#line 1375 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 63 "fin.y" /* yacc.c:1652  */
    { printf("\nf(4)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) - (yyvsp[0].decimal));}
#line 1381 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 64 "fin.y" /* yacc.c:1652  */
    { printf("\nf(5)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) - (yyvsp[0].entero));}
#line 1387 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 65 "fin.y" /* yacc.c:1652  */
    { printf("\nf(6)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].entero) - (yyvsp[0].decimal));}
#line 1393 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 66 "fin.y" /* yacc.c:1652  */
    { printf("\nf(7)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) * (yyvsp[0].decimal));}
#line 1399 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 67 "fin.y" /* yacc.c:1652  */
    { printf("\nf(8)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) * (yyvsp[0].entero));}
#line 1405 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 68 "fin.y" /* yacc.c:1652  */
    { printf("\nf(9)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].entero) * (yyvsp[0].decimal));}
#line 1411 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 69 "fin.y" /* yacc.c:1652  */
    { printf("\nf(10)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) / (yyvsp[0].decimal));}
#line 1417 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 70 "fin.y" /* yacc.c:1652  */
    { printf("\nf(11)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].entero) / (yyvsp[0].decimal));}
#line 1423 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 71 "fin.y" /* yacc.c:1652  */
    { printf("\nf(12)\n");printf("\nResultado=%.2f\n",(yyvsp[-2].decimal) / (yyvsp[0].entero));}
#line 1429 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 72 "fin.y" /* yacc.c:1652  */
    {printf("\nf(13)\n");printf("\nResultado=%.2f\n",pow((yyvsp[-3].decimal),(yyvsp[-1].decimal)));}
#line 1435 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 73 "fin.y" /* yacc.c:1652  */
    {printf("\nf(14)\n");printf("\nResultado=%.2f\n",pow((yyvsp[-3].entero),(yyvsp[-1].decimal)));}
#line 1441 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 74 "fin.y" /* yacc.c:1652  */
    {printf("\nf(15)\n");printf("\nResultado=%.2f\n",pow((yyvsp[-3].decimal),(yyvsp[-1].entero)));}
#line 1447 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 75 "fin.y" /* yacc.c:1652  */
    { printf("\nf(16)\n");printf("\nResultado=%lf\n",fmod((yyvsp[-3].decimal),(yyvsp[-1].decimal)));}
#line 1453 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 76 "fin.y" /* yacc.c:1652  */
    { printf("\nf(17)\n");printf("\nResultado=%lf\n",fmod((yyvsp[-3].entero),(yyvsp[-1].decimal)));}
#line 1459 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 77 "fin.y" /* yacc.c:1652  */
    { printf("\nf(18)\n");printf("\nResultado=%lf\n",fmod((yyvsp[-3].decimal),(yyvsp[-1].entero)));}
#line 1465 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 85 "fin.y" /* yacc.c:1652  */
    { (yyval.entero) = (yyvsp[0].entero); }
#line 1471 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 86 "fin.y" /* yacc.c:1652  */
    { printf("\nf(19)\n");printf("\nResultado=%d\n",(yyvsp[-2].entero) + (yyvsp[0].entero));}
#line 1477 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 87 "fin.y" /* yacc.c:1652  */
    { printf("\nf(20)\n");printf("\nResultado=%d\n",(yyvsp[-2].entero) - (yyvsp[0].entero));}
#line 1483 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 88 "fin.y" /* yacc.c:1652  */
    { printf("\nf(21)\n");printf("\nResultado=%d\n",(yyvsp[-2].entero) * (yyvsp[0].entero));}
#line 1489 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 89 "fin.y" /* yacc.c:1652  */
    { printf("\nf(22)\n");
            if ((((yyvsp[-2].entero)/(yyvsp[0].entero))%2)==0){printf("\nResultado=%d\n",(yyvsp[-2].entero) / (yyvsp[0].entero));}
            else { printf("\nResultado=%lf\n",(double)(yyvsp[-2].entero) /(double)(yyvsp[0].entero));}
            
   }
#line 1499 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 94 "fin.y" /* yacc.c:1652  */
    { printf("\nf(23)\n");printf("\nResultado=%d\n",(int)fmod((yyvsp[-3].entero),(yyvsp[-1].entero)));}
#line 1505 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 95 "fin.y" /* yacc.c:1652  */
    { printf("\nf(24)\n");
	printf("\nNumero1=%d\n",(yyvsp[-3].entero));
	printf("\nNumero2=%d\n",(yyvsp[-1].entero));
	printf("\nResultado=%d\n",(int)pow((double)(yyvsp[-3].entero),(double)(yyvsp[-1].entero)));}
#line 1514 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 103 "fin.y" /* yacc.c:1652  */
    {(yyval.cadena) = (yyvsp[0].cadena);}
#line 1520 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 104 "fin.y" /* yacc.c:1652  */
    {(yyval.cadena) = (yyvsp[0].va);}
#line 1526 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 105 "fin.y" /* yacc.c:1652  */
    {printf("\nf(25)\n");printf("\nResultado: %s\n", strca((yyvsp[-2].cadena),(yyvsp[0].cadena)));}
#line 1532 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 106 "fin.y" /* yacc.c:1652  */
    {
    printf("\nf(26)\n");
        char uno[100],dos[100],tres[100],cuatro[100], cinco[100];
        //printf("\nEmpieza\n");
        printf("\n%s\n",(yyvsp[-1].res));
        char delimitador[] = "+-/*";
        char mm[64], ori[100], demas[100], rep[100];
        int x=0, j=0,i, prin, nd=0, a, b;
        double c, d,qq,ww,ee,rr,tt;
        for(i=0; (yyvsp[-1].res)[i]!= '\0'; i++){
            if((yyvsp[-1].res)[i]=='+')
                nd++;
            if((yyvsp[-1].res)[i]=='-')
                nd++;
            if((yyvsp[-1].res)[i]=='/')
                nd++;
            if((yyvsp[-1].res)[i]=='*')
                nd++;
        }
        //printf("\nnumero total:%d\n",nd); //Cuenta los operandos
        
        for(i=0; (yyvsp[-1].res)[i]!= '='; i++){//parte la variable =
            ori[x]=(yyvsp[-1].res)[i];
            x++;
        }
        ori[x] = '\0';
        //printf("\n%s\n",ori);  
        
        prin=strln(ori)+1;
        for(prin; (yyvsp[-1].res)[prin]!= '\0'; prin++){ //parte lo demas
            demas[j]=(yyvsp[-1].res)[prin];
            j++;
        }
        demas[j] = '\0';
        strcy(rep,demas);
        D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(D->name,ori);
        if(Buscarcon(raiz, D)!=NULL){ //Muestra si la variable esta declarada
            if(nd==1){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                //printf("\n%s\n",uno);
                //printf("\n%s\n",dos);
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL){
                 int z, zz=0;
                 char *ptr;

                    for(z=0; rep[z]!='\0'; z++){
                        if(rep[zz]=='+'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a+b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)+c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c+((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c+d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                
                            }
                        else if(rep[zz]=='-'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a-b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)-c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c-((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c-d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                
                            }
                        else if(rep[zz]=='*'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a*b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)*c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c*((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c*d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                            }
                        else if(rep[zz]=='/'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a/b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)/c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c/((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c/d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                            }
                            zz++;
                        }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==2){
            printf("\n\t\tENTRO AQUI\n");
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL){
                    if(detm(rep)==1 && detms(rep)==1){ //+ y -
                        double resf;
                        resf=qq+ww-ee;
                        printf("\t\n%lf+%lf-%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detml(rep)==1){ //+ *
                        double resf;
                        resf=qq+ww*ee;
                        printf("\t\n%lf+%lf*%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detd(rep)==1){ //+ /
                        double resf;
                        resf=qq+ww/ee;
                        printf("\t\n%lf+%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detml(rep)==1){ //- *
                        double resf;
                        resf=qq-ww*ee;
                        printf("\t\n%lf-%lf*%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detd(rep)==1){ //- /
                        double resf;
                        resf=qq-ww/ee;
                        printf("\t\n%lf-%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detml(rep)==1 && detd(rep)==1){ //* /
                        double resf;
                        resf=qq*ww/ee;
                        printf("\t\n%lf*%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==3){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                strcpy(cuatro,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(E->name,cuatro);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                rr=stod(Buscarcon(raiz, E));
                //printf("\nVAMOS BIEN\n");
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL && Buscarcon(raiz, E)!=NULL){
                //printf("\nENTRO\n");
                    if(detm(rep)==1 && detms(rep)==1 && detml(rep)==1){ //+ - *
                        double resf;
                        resf=qq+ww-ee*rr;
                        printf("\t\n%lf+%lf-%lf*%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detms(rep)==1 && detd(rep)==1){ //+ - /
                        double resf;
                        resf=qq+ww-ee/rr;
                        printf("\t\n%lf+%lf-%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detml(rep)==1 && detd(rep)==1){ //- * /
                        double resf;
                        resf=qq-ww*ee/rr;
                        printf("\t\n%lf-%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detml(rep)==1 && detd(rep)==1){ //+ * /
                        double resf;
                        resf=qq+ww*ee/rr;
                        printf("\t\n%lf+%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==4){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                strcpy(cuatro,strtok(NULL, delimitador));
                strcpy(cinco,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(E->name,cuatro);
                F=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(F->name,cinco);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                rr=stod(Buscarcon(raiz, E));
                tt=stod(Buscarcon(raiz, F));
                //printf("\nVAMOS BIEN\n");
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL && Buscarcon(raiz, E)!=NULL && Buscarcon(raiz, F)!=NULL){
                //printf("\nENTRO\n");
                    if(detm(rep)==1 && detms(rep)==1 && detml(rep)==1 && detd(rep)==1){ //+ - *
                        double resf;
                        resf=qq+ww-ee*rr/tt;
                        printf("\t\n%lf+%lf-%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,tt,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
        }else{
            printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
        }
        
    }
#line 2539 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 1108 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(27)\n");
        char b[100];
        int x=0; char ne[100], i;
        for(i=0; (yyvsp[-1].res)[i]!= '='; i++){//parte la variable 1=
            b[x]=(yyvsp[-1].res)[i];
            x++;
        }
        b[x] = '\0';
        //puts(b);
        int l=0;
        int num=strln(b)+1;
        printf("\n%d\n",num);
        for(num; (yyvsp[-1].res)[num]!= '\0'; num++){//parte la variable =2
            ne[l]=(yyvsp[-1].res)[num];
            l++;
        }
        ne[l] = '\0';
        //puts(ne);
            B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(B->name,b);
            if(Buscar(raiz, B)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else{
              /*A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
             strcy(A->type,"string");
             printf("\n%d\n",Buscars(raiz, A));
             if(Buscars(raiz, A)!= 1){//si es compatible*/
                X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(X->name,ne);
                    char mm[1000], array[64];
                    double aux;
                    E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(E->name,ne);
                    strcy(mm,Buscarcon(raiz, E)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
                    aux=5.0;
                    //printf("\nd=%lf\n",aux);
                    snprintf(array, 64, "%f", aux);
                    //printf("\ncad=%lf\n",array);
                    printf("Ingresando el nombre\n");
                    //printf("\nnombre ingresado=%s\n",b);
                    strcy(D->name,b);
                    printf("Ingresa el tipo\n");
                    strcy(D->type,"double");
                    printf("Ingresando el valor\n");
                    strcy(D->value,array);
                    insertarABB(&raiz,D);
                }
                /*else
                    printf("\n\tNO ES COMPATIBLE");*/
            }
#line 2595 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 1159 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(28)\n");
        char b[100];
        int x=0; char ne[100], i;
        for(i=0; (yyvsp[-1].res)[i]!= '='; i++){//parte la variable 1=
            b[x]=(yyvsp[-1].res)[i];
            x++;
        }
        b[x] = '\0';
        //puts(b);
        int l=0;
        int num=strln(b)+1;
        printf("\n%d\n",num);
        for(num; (yyvsp[-1].res)[num]!= '\0'; num++){//parte la variable =2
            ne[l]=(yyvsp[-1].res)[num];
            l++;
        }
        ne[l] = '\0';
        //puts(ne);
            B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(B->name,b);
            if(Buscar(raiz, B)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else{
             X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
             strcy(X->name,ne);
                if(Buscarcon(raiz, X)!=NULL){
                    char mm[1000], array[64];
                    int aux;
                    E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(E->name,ne);
                    strcy(mm,Buscarcon(raiz, E)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
                    aux=atoi(mm);
                    printf("\ni=%d\n",aux);
                    sprintf( array,"%d", aux);
                    printf("\ncad=%s\n",array);
                    printf("\nnombre ingresado=%s\n",b);
                    strcy(D->name,b);
                    printf("Ingresa el tipo\n");
                    strcy(D->type,"int");
                    printf("Ingresando el valor\n");
                    strcy(D->value,array);
                    insertarABB(&raiz,D);
				}else
                    printf("\n\tNO ESTA DECLARADO\n");
            }
        }
#line 2647 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 1210 "fin.y" /* yacc.c:1652  */
    {
            printf("\nf(29)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-1].va));
            
            if(Buscar(raiz, D)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,(yyvsp[-1].va));
				printf("Ingresando el tipo\n");
				strcy(D->type,(yyvsp[-2].res));
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
            }
#line 2672 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 1230 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(30)\n");
            char cad[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            if(Buscar(raiz, D)==1)
            printf("Esta en la tabla");
            //printf("\nQPDDDDDDD %s\n", D->name);
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresa el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresa el tipo\n");
				strcy(D->type,(yyvsp[-4].res));
                printf("Ingresando el valor\n");
                char array[64];
                sprintf( array,"%d", (yyvsp[-1].entero) );
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
                }
            }
#line 2702 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 1260 "fin.y" /* yacc.c:1652  */
    {           printf("\nf(31)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-1].va));
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,(yyvsp[-1].va));
				printf("Ingresando el tipo\n");
				strcy(D->type,(yyvsp[-2].res));
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
        }
#line 2725 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 1278 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(32)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            if(Buscar(raiz, D)==1)
            printf("Esta en la tabla");
            //printf("\nQPDDDDDDD %s\n", D->name);
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresando el tipo\n");
				strcy(D->type,(yyvsp[-4].res));
                printf("Ingresando el valor\n");
                char array[64];
                snprintf(array, 64, "%f", (yyvsp[-1].decimal));
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
                }
        }
#line 2754 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 1306 "fin.y" /* yacc.c:1652  */
    {
printf("\nf(33)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-1].va));
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,(yyvsp[-1].va));
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
        }
#line 2778 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 1325 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(34)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
				strcy(D->value,(yyvsp[-1].cadena));
				insertarABB(&raiz,D);
				}
        }
#line 2803 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 1349 "fin.y" /* yacc.c:1652  */
    {
printf("\nf(35)\n");
        int aux=1, cont=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                printf("Ingresando ID\n");
                aux=i-aux;
                printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresa el tipo\n");
				strcy(D->type,"int");
                printf("Ingresando el valor\n");
                char array[64];
                sprintf( array,"%d", (yyvsp[-1].entero) );
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
        }
#line 2831 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 1372 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(36)\n");
            int aux=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                printf("Ingresando ID\n");
                aux=i-aux;
                printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresa el tipo\n");
				strcy(D->type,"double");
                printf("Ingresando el valor\n");
                char array[64];
                snprintf(array, 64, "%f", (yyvsp[-1].decimal));
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
        }
#line 2859 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 1395 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(37)\n");
            int aux=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-3].va));
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                //printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,(yyvsp[-3].va));
				printf("Ingresa el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,(yyvsp[-1].cadena));
				insertarABB(&raiz,D);
        }
#line 2884 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 1416 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(38)\n");
        //printf("\nENTRO!!!!!!!\n");
        char b[100];
        int x=0;
        for(i=0; (yyvsp[-6].res)[i]!= '='; i++){//parte la variable =
            b[x]=(yyvsp[-6].res)[i];
            x++;
        }
        b[x] = '\0';
        D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(D->name,b);
        DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(DD->name,(yyvsp[-4].va));
        if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
        //printf("\nENTROOOO\n");
        //printf("\n%d\n",$5);
            int i, j, x=0, l=0, cont=1;
            char mm[1000];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-4].va));
            strcy(mm,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
            int aux=1;
             D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,b);
                eliminarABB(&raiz, D);
               // printf("\nelimino, listro para crear\n");
            if((yyvsp[-2].entero)==0){
                //printf("\nResultado: 3\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,"3");
				insertarABB(&raiz,D);
            }
            if((yyvsp[-2].entero)==1){
                //printf("\nResultado: %s\n", mm);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,mm);
				insertarABB(&raiz,D);
            }
            if((yyvsp[-2].entero)>1){
            char ori[1000],cp[1000];
            //printf("\na\n");
            strcy(ori,mm);
            strcy(cp,mm);
                while((yyvsp[-2].entero)!=cont){
               // printf("\n%d\n",cont);
                    if(cont<(yyvsp[-2].entero)){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien");
				insertarABB(&raiz,D);
            }
            if((yyvsp[-2].entero)<0){
                //printf("\nnumero->%d\n",$5);
                int lim=numpos((yyvsp[-2].entero));
                //printf("\ncuadrado->%d\n",lim);
                char ori[1000],cp[1000];
                //printf("\na\n");
                strcy(ori,strrev(mm));
                strcy(cp,ori);
                while(lim!=cont){
                //printf("\n%d\n",cont);
                    if(cont<lim){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien :3\n");
				insertarABB(&raiz,D);
                }
            }else
                printf("\n\tNO ESTA DECLADO LA VARIABLE\n");
        }
#line 3004 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 1531 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(39)\n");
            char uno[100], dos[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-4].va));
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,(yyvsp[-2].va));
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-4].va));
            strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,(yyvsp[-2].va));
            strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            //printf("%s %s",uno,dos);
            //printf("\n%d<%d",stod(uno),stod(dos));
           /* X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(X->type,"string");
            printf("\nf%d\n",Buscars(raiz,D,X));*/
                //printf("\n%d\n",mmenm(uno,dos));
                //printf("que pex");
                if(mmenm(uno,dos)==1)
                    printf("\t\nTRUE\n");
                else
                    printf("\t\nFALSE\n");
                
        }
         else
            printf("\t\nNO ESTA DECLARADO\n");
    
    }
#line 3040 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 1562 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(40)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-4].va));
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-4].va));
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                //printf("%s %s",uno,dos);
                //printf("\n%d<%d",stod(uno),stod(dos));
                    if(stod(uno)>stod(dos))
                        printf("\t\nTRUE\n");
                    else
                        printf("\t\nFALSE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
#line 3071 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 1589 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(39)\n");
            char uno[100], dos[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-12].va));
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,(yyvsp[-10].va));
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-12].va));
            strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,(yyvsp[-10].va));
            strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            //printf("%s %s",uno,dos);
            //printf("\n%d<%d",stod(uno),stod(dos));
           /* X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(X->type,"string");
            printf("\nf%d\n",Buscars(raiz,D,X));*/
                //printf("\n%d\n",mmenm(uno,dos));
                //printf("que pex");
                if(mmenm(uno,dos)==1)
                    printf("\t\nTRUE\n");
                else
                    printf("\t\nFALSE\n");
                
        }
         else
            printf("\t\nNO ESTA DECLARADO\n");
    
    }
#line 3107 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 1620 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(40)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-4].va));
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-4].va));
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                //printf("%s %s",uno,dos);
                //printf("\n%d<%d",stod(uno),stod(dos));
                    if(mmenm(uno,dos)==-1)
                    printf("\t\nFALSE\n");
                else
                    printf("\t\nTRUE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
#line 3138 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 1647 "fin.y" /* yacc.c:1652  */
    {
        printf("\nf(41)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-5].va));
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-5].va));
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,(yyvsp[-2].va));
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                printf("%s %s",uno,dos);
                printf("\n%d<%d",stod(uno),stod(dos));
                    if(stod(uno)==stod(dos))
                        printf("\t\nTRUE\n");
                    else
                        printf("\t\nFALSE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
#line 3169 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 1674 "fin.y" /* yacc.c:1652  */
    {
            printf("\nf(42)\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,(yyvsp[-14].va));
                if(Buscarcon(raiz, D)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                    int i, j, x=0, l=0, cont=1;
                    char mm[1000], conte[100];
                    strcy(mm,(yyvsp[-9].cadena));
                    int aux=1;
                    D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(D->name,(yyvsp[-14].va));
                    strcy(conte,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                    if((yyvsp[-7].entero)==0){
                        strcy(mm,"3");
                    }
                    if((yyvsp[-7].entero)==1){
                        printf("\nNADA\n");
                    }
                    if((yyvsp[-7].entero)>1){
                    char ori[1000],cp[1000];
                    //printf("\na\n");
                    strcy(ori,mm);
                    strcy(cp,mm);
                        while((yyvsp[-7].entero)!=cont){
                    // printf("\n%d\n",cont);
                            if(cont<(yyvsp[-7].entero)){
                                strca(ori,cp);
                                //printf("\n%s\n",strca(ori,cp));
                            }
                                cont++;
                        }
                        strcy(mm,ori);
                    }
                    if((yyvsp[-7].entero)<0){
                        //printf("\nnumero->%d\n",$5);
                        int lim=numpos((yyvsp[-7].entero));
                        //printf("\ncuadrado->%d\n",lim);
                        char ori[1000],cp[1000];
                        //printf("\na\n");
                        strcy(ori,strrev(mm));
                        strcy(cp,ori);
                        while(lim!=cont){
                        //printf("\n%d\n",cont);
                            if(cont<lim){
                                strca(ori,cp);
                                //printf("\n%s\n",strca(ori,cp));
                            }
                                cont++;
                        }
                        strcy(mm,ori);
                }
                strca(mm,(yyvsp[-4].cadena));
                strca(mm,(yyvsp[-2].cadena));
                puts(mm);
                puts(conte);
                if(strels(mm,conte)==0)
                    printf("\nSon iguales\n");
                else
                    printf("\nSon diferentes\n");
            }else
                printf("\t\nNO ESTA DECLARADO\n");    
        
        }
#line 3237 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 1739 "fin.y" /* yacc.c:1652  */
    {
             printf("\nf(43)\n");
             char b[100];
            int x=0;
            for(i=0; (yyvsp[-8].res)[i]!= '='; i++){//parte la variable =
                b[x]=(yyvsp[-8].res)[i];
                x++;
            }
            b[x] = '\0';
            //puts(b);
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,b);
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,(yyvsp[-6].va));
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){
             int i, j, x=0, l=0, cont=1;
            char mm[1000];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,(yyvsp[-6].va));
            strcy(mm,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            int aux=1;
             D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,b);
                eliminarABB(&raiz, D);
               // printf("\nelimino, listro para crear\n");
            if((yyvsp[-4].entero)==0){
                char cero[10];
                strcy(cero,"3");
                strca(cero,(yyvsp[-1].cadena));
                //puts(cero);
                //printf("\nResultado: 3\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,cero);
				insertarABB(&raiz,D);
            }
            if((yyvsp[-4].entero)==1){
                //printf("\nadentro:%s\n",mm);
                strca(mm,(yyvsp[-1].cadena));
                //printf("\nconcatenado:%s\n",mm);
                //printf("\nResultado: %s\n", mm);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,mm);
				insertarABB(&raiz,D);
            }
            if((yyvsp[-4].entero)>1){
            char ori[1000],cp[1000];
            //printf("\na\n");
            strcy(ori,mm);
            strcy(cp,mm);
                while((yyvsp[-4].entero)!=cont){
               // printf("\n%d\n",cont);
                    if(cont<(yyvsp[-4].entero)){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien");
				insertarABB(&raiz,D);
            }
            if((yyvsp[-4].entero)<0){
                //printf("\nnumero->%d\n",$5);
                int lim=numpos((yyvsp[-4].entero));
                //printf("\ncuadrado->%d\n",lim);
                char ori[1000],cp[1000];
                //printf("\na\n");
                strcy(ori,strrev(mm));
                strcy(cp,ori);
                while(lim!=cont){
                //printf("\n%d\n",cont);
                    if(cont<lim){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                strca(ori,(yyvsp[-1].cadena));
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien :3\n");
				insertarABB(&raiz,D);
                }
        }
        else
            printf("\nLA VARIABLE NO ESTA DECLARADO\n");
        }
#line 3364 "fin.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 1862 "fin.y" /* yacc.c:1652  */
    {imprimirOrd(raiz);}
#line 3370 "fin.tab.c" /* yacc.c:1652  */
    break;


#line 3374 "fin.tab.c" /* yacc.c:1652  */
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 1866 "fin.y" /* yacc.c:1918  */


int main() {
  yyparse();
}
             
yyerror (char *s)
{
  printf ("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  
