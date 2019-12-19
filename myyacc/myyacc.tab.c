
/*  A Bison parser, made from ./myyacc/myyacc.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	NUM	257
#define	BOOLEAN	258
#define	ID	259
#define	INT	260
#define	BOOL	261
#define	letter	262
#define	digit	263
#define	IF	264
#define	ELSE	265
#define	WHILE	266
#define	WRITE	267
#define	READ	268
#define	AND	269
#define	OR	270
#define	XOR	271
#define	REL	272
#define	ODD	273

#line 1 "./myyacc/myyacc.y"


#include "myh.h"
#include "myhh.h"
#include "myyacc.tab.h"
int flag = 1;
extern int yylineno;

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		123
#define	YYFLAG		-32768
#define	YYNTBASE	34

#define YYTRANSLATE(x) ((unsigned)(x) <= 273 ? yytranslate[x] : 53)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    24,     2,     2,     2,    33,     2,     2,    31,
    32,    21,    20,     2,    23,     2,    22,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    27,     2,
    30,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    28,     2,    29,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    25,     2,    26,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     9,    12,    13,    17,    21,    28,    35,
    37,    40,    41,    46,    54,    58,    62,    64,    66,    68,
    73,    74,    75,    76,    78,    80,    91,    96,   104,   108,
   112,   114,   119,   126,   137,   142,   146,   150,   152,   156,
   161,   165,   169,   173,   175,   179,   183,   185,   187,   189,
   193,   195,   198,   200
};

static const short yyrhs[] = {    36,
     0,     0,    25,    37,    35,    40,    26,     0,    37,    38,
     0,     0,     6,    39,    27,     0,     7,    39,    27,     0,
     6,    39,    28,     3,    29,    27,     0,     7,    39,    28,
     3,    29,    27,     0,     5,     0,    40,    41,     0,     0,
    39,    30,    49,    27,     0,    12,    44,    31,    49,    32,
    42,    41,     0,    13,    49,    27,     0,    14,    39,    27,
     0,    36,     0,    46,     0,    47,     0,    48,    30,    49,
    27,     0,     0,     0,     0,    46,     0,    47,     0,    10,
    31,    49,    32,    42,    46,    43,    11,    44,    46,     0,
    39,    30,    49,    27,     0,    12,    44,    31,    49,    32,
    42,    41,     0,    13,    49,    27,     0,    14,    39,    27,
     0,    36,     0,    48,    30,    49,    27,     0,    10,    31,
    49,    32,    42,    45,     0,    10,    31,    49,    32,    42,
    46,    43,    11,    44,    47,     0,    39,    28,    49,    29,
     0,    50,    20,    50,     0,    50,    23,    50,     0,    50,
     0,    49,    16,    50,     0,    19,    31,    49,    32,     0,
    51,    21,    51,     0,    51,    22,    51,     0,    51,    33,
    51,     0,    51,     0,    50,    15,    51,     0,    50,    17,
    51,     0,    39,     0,     3,     0,    48,     0,    31,    49,
    32,     0,     4,     0,    24,    51,     0,    52,     0,    49,
    18,    49,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    25,    27,    35,    37,    38,    40,    43,    46,    49,    53,
    55,    56,    58,    62,    66,    69,    74,    76,    77,    78,
    83,    88,    93,    97,    98,   100,   105,   109,   113,   116,
   117,   118,   123,   126,   131,   136,   139,   142,   143,   146,
   150,   153,   156,   159,   160,   163,   167,   171,   174,   178,
   179,   182,   185,   188
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","NUM","BOOLEAN",
"ID","INT","BOOL","letter","digit","IF","ELSE","WHILE","WRITE","READ","AND",
"OR","XOR","REL","ODD","'+'","'*'","'/'","'-'","'!'","'{'","'}'","';'","'['",
"']'","'='","'('","')'","'%'","program","P","block","decls","decl","id","stmts",
"stmt","M","N","O","if_else_stmt","matched_stmt","open_stmt","Elist","expr",
"term","factor","rel", NULL
};
#endif

static const short yyr1[] = {     0,
    34,    35,    36,    37,    37,    38,    38,    38,    38,    39,
    40,    40,    41,    41,    41,    41,    41,    41,    41,    41,
    42,    43,    44,    45,    45,    46,    46,    46,    46,    46,
    46,    46,    47,    47,    48,    49,    49,    49,    49,    49,
    50,    50,    50,    50,    50,    50,    51,    51,    51,    51,
    51,    51,    51,    52
};

static const short yyr2[] = {     0,
     1,     0,     5,     2,     0,     3,     3,     6,     6,     1,
     2,     0,     4,     7,     3,     3,     1,     1,     1,     4,
     0,     0,     0,     1,     1,    10,     4,     7,     3,     3,
     1,     4,     6,    10,     4,     3,     3,     1,     3,     4,
     3,     3,     3,     1,     3,     3,     1,     1,     1,     3,
     1,     2,     1,     3
};

static const short yydefact[] = {     0,
     5,     1,     2,     0,     0,    12,     4,    10,     0,     0,
     0,     6,     0,     7,     0,     0,    23,     0,     0,     3,
    17,     0,    11,    18,    19,     0,     0,     0,     0,     0,
    48,    51,     0,     0,     0,    47,    49,     0,    38,    44,
    53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    44,     0,     0,     0,    15,     0,     0,     0,     0,
     0,     0,     0,    16,     0,     0,     0,     8,     9,    21,
     0,     0,    50,    39,    54,    44,    44,    36,    37,    41,
    42,    43,    35,    13,    20,     0,    21,    40,    23,     0,
     0,    31,     0,    33,    24,    25,     0,     0,     0,     0,
     0,     0,     0,     0,    14,     0,    29,    30,     0,    23,
     0,     0,    27,     0,    32,    21,    26,    34,     0,    28,
     0,     0,     0
};

static const short yydefgoto[] = {   121,
     6,    21,     3,     7,    36,    11,    23,    86,   103,    30,
    94,    24,    25,    37,    51,    39,    40,    41
};

static const short yypact[] = {   -19,
-32768,-32768,   102,    13,    13,-32768,-32768,-32768,   117,   133,
    38,-32768,    25,-32768,    52,    29,-32768,    22,    13,-32768,
-32768,    74,-32768,-32768,-32768,    36,    42,    47,    22,    49,
-32768,-32768,    61,    22,    22,    55,-32768,   103,   154,   -12,
-32768,    97,    22,    22,    22,   106,   112,    43,    22,    22,
    89,    96,    63,    22,    22,-32768,    22,    22,    22,    22,
    22,    22,    22,-32768,    85,   104,   124,-32768,-32768,-32768,
    68,    80,-32768,   150,    89,   105,   114,    -3,   141,    -9,
   116,   -12,-32768,-32768,-32768,    44,-32768,-32768,-32768,    22,
    13,-32768,   148,-32768,   146,-32768,   142,    60,   131,   132,
   152,    22,   164,    22,-32768,    22,-32768,-32768,   136,-32768,
   137,    81,-32768,    44,-32768,-32768,-32768,-32768,    60,-32768,
   180,   181,-32768
};

static const short yypgoto[] = {-32768,
-32768,     2,-32768,-32768,    -4,-32768,   -90,   -83,-32768,   -66,
-32768,   -69,   -67,    -8,   -13,     8,   -23,-32768
};


#define	YYLAST		181


static const short yytable[] = {     9,
    10,     2,    26,    98,    38,     1,    22,   105,    61,    62,
    52,    57,    62,    58,    42,    48,    95,     8,    96,    60,
    63,    53,    99,    63,    31,    32,     8,    27,   120,    65,
    66,    67,   119,    76,    77,    71,    72,    80,    81,    82,
    33,    75,     8,   114,   117,    34,   118,    16,     8,    17,
    18,    19,    35,    16,    28,    89,    90,    91,    54,    29,
    55,    74,     1,    20,     8,    45,    78,    79,     1,    16,
    46,    17,    18,    19,    70,    47,   100,    97,    54,    49,
    55,    93,    43,    54,     1,    55,   101,    92,   109,    26,
   111,    50,   112,    22,    73,    54,    54,    55,    55,    87,
    54,    43,    55,    44,    54,    97,    55,     4,     5,    93,
    26,    88,   116,    83,    22,    92,   -52,   -52,    54,    54,
    55,    55,   -52,    64,   -52,    61,    62,   -52,    63,    56,
    84,   -45,    68,   -45,    61,    62,   -45,    63,    69,    54,
   -46,    55,   -46,    12,    13,   -46,    63,    54,    63,    55,
    85,    54,    54,    55,    55,    57,   -22,    58,   107,    14,
    15,   106,   113,   115,    57,   -38,    58,   -38,    57,    59,
    58,   104,    60,    59,   110,    43,    60,   102,   108,   122,
   123
};

static const short yycheck[] = {     4,
     5,     0,    11,    87,    18,    25,    11,    98,    21,    22,
    34,    15,    22,    17,    19,    29,    86,     5,    86,    23,
    33,    35,    89,    33,     3,     4,     5,     3,   119,    43,
    44,    45,   116,    57,    58,    49,    50,    61,    62,    63,
    19,    55,     5,   110,   114,    24,   114,    10,     5,    12,
    13,    14,    31,    10,     3,    12,    13,    14,    16,    31,
    18,    54,    25,    26,     5,    30,    59,    60,    25,    10,
    29,    12,    13,    14,    32,    29,    90,    86,    16,    31,
    18,    86,    28,    16,    25,    18,    91,    86,   102,    98,
   104,    31,   106,    98,    32,    16,    16,    18,    18,    32,
    16,    28,    18,    30,    16,   114,    18,     6,     7,   114,
   119,    32,    32,    29,   119,   114,    21,    22,    16,    16,
    18,    18,    27,    27,    29,    21,    22,    32,    33,    27,
    27,    27,    27,    29,    21,    22,    32,    33,    27,    16,
    27,    18,    29,    27,    28,    32,    33,    16,    33,    18,
    27,    16,    16,    18,    18,    15,    11,    17,    27,    27,
    28,    31,    27,    27,    15,    16,    17,    18,    15,    20,
    17,    30,    23,    20,    11,    28,    23,    30,    27,     0,
     0
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 25 "./myyacc/myyacc.y"
{;
    break;}
case 2:
#line 27 "./myyacc/myyacc.y"
{
	if(flag){
	gen("int", 0, dx);
	dx = 3;
	flag = 0;
	}	
	;
    break;}
case 3:
#line 35 "./myyacc/myyacc.y"
{;
    break;}
case 4:
#line 37 "./myyacc/myyacc.y"
{;
    break;}
case 5:
#line 38 "./myyacc/myyacc.y"
{;
    break;}
case 6:
#line 40 "./myyacc/myyacc.y"
{
     	enter(yyvsp[-1].id_val, 0, 0);
	;
    break;}
case 7:
#line 43 "./myyacc/myyacc.y"
{
	enter(yyvsp[-1].id_val, 1, 0);
	;
    break;}
case 8:
#line 46 "./myyacc/myyacc.y"
{
	enter(yyvsp[-4].id_val, 2, yyvsp[-2].val);
	;
    break;}
case 9:
#line 49 "./myyacc/myyacc.y"
{
	enter(yyvsp[-4].id_val, 3, yyvsp[-2].val);
	;
    break;}
case 10:
#line 53 "./myyacc/myyacc.y"
{;
    break;}
case 11:
#line 55 "./myyacc/myyacc.y"
{;
    break;}
case 12:
#line 56 "./myyacc/myyacc.y"
{;
    break;}
case 13:
#line 58 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[-3].id_val, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	;
    break;}
case 14:
#line 62 "./myyacc/myyacc.y"
{
	gen("jmp", 0, yyvsp[-6].val);
	code[yyvsp[-2].val].a = cx;
	;
    break;}
case 15:
#line 66 "./myyacc/myyacc.y"
{
	gen("wrt", 0, 0);
	;
    break;}
case 16:
#line 69 "./myyacc/myyacc.y"
{
	gen("rd", 0, 0);
	int i = position(yyvsp[-1].id_val, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	;
    break;}
case 17:
#line 74 "./myyacc/myyacc.y"
{
	;
    break;}
case 18:
#line 76 "./myyacc/myyacc.y"
{;
    break;}
case 19:
#line 77 "./myyacc/myyacc.y"
{;
    break;}
case 20:
#line 78 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[-3].id_val, level);
	gen("stoarr", level - table[i].l_v, table[i].addr);
	;
    break;}
case 21:
#line 83 "./myyacc/myyacc.y"
{
	yyvsp[0].val = cx;
	gen("jpc", 0, 0);
	;
    break;}
case 22:
#line 88 "./myyacc/myyacc.y"
{
	yyvsp[0].val = cx;
	gen("jmp", 0, 0);
	;
    break;}
case 23:
#line 93 "./myyacc/myyacc.y"
{
	yyvsp[0].val = cx;
	;
    break;}
case 24:
#line 97 "./myyacc/myyacc.y"
{;
    break;}
case 25:
#line 98 "./myyacc/myyacc.y"
{;
    break;}
case 26:
#line 101 "./myyacc/myyacc.y"
{
	code[yyvsp[-6].val].a = yyvsp[-2].val;
	code[yyvsp[-4].val].a = cx;
	;
    break;}
case 27:
#line 105 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[-3].id_val, level);
	gen("sto", level - table[i].l_v, table[i].addr);
	;
    break;}
case 28:
#line 109 "./myyacc/myyacc.y"
{
	gen("jmp", 0, yyvsp[-6].val);
	code[yyvsp[-2].val].a = cx;
	;
    break;}
case 29:
#line 113 "./myyacc/myyacc.y"
{
	gen("wrt", 0, 0);
	;
    break;}
case 30:
#line 116 "./myyacc/myyacc.y"
{;
    break;}
case 31:
#line 117 "./myyacc/myyacc.y"
{;
    break;}
case 32:
#line 118 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[-3].id_val, level);
	gen("stoarr", level - table[i].l_v, table[i].addr);
	;
    break;}
case 33:
#line 123 "./myyacc/myyacc.y"
{
	code[yyvsp[-2].val].a = cx;
	;
    break;}
case 34:
#line 126 "./myyacc/myyacc.y"
{
	code[yyvsp[-6].val].a = yyvsp[-2].val;
	code[yyvsp[-4].val].a = cx;
	;
    break;}
case 35:
#line 131 "./myyacc/myyacc.y"
{
	yyvsp[-4].val = yyvsp[-1].val;
	strcpy(yyvsp[-4].id_val, yyvsp[-3].id_val);	
	;
    break;}
case 36:
#line 136 "./myyacc/myyacc.y"
{
	gen("opr", 0, 2);
	;
    break;}
case 37:
#line 139 "./myyacc/myyacc.y"
{
	gen("opr", 0, 3);
	;
    break;}
case 38:
#line 142 "./myyacc/myyacc.y"
{;
    break;}
case 39:
#line 143 "./myyacc/myyacc.y"
{
	gen("opr", 0, 15);
	;
    break;}
case 40:
#line 146 "./myyacc/myyacc.y"
{
	gen("opr", 0, 19);
	;
    break;}
case 41:
#line 150 "./myyacc/myyacc.y"
{
	gen("opr", 0, 4);	
	;
    break;}
case 42:
#line 153 "./myyacc/myyacc.y"
{
	gen("opr", 0, 5);
	;
    break;}
case 43:
#line 156 "./myyacc/myyacc.y"
{
	gen("opr", 0, 14);
	;
    break;}
case 44:
#line 159 "./myyacc/myyacc.y"
{;
    break;}
case 45:
#line 160 "./myyacc/myyacc.y"
{
	gen("opr", 0, 16);
	;
    break;}
case 46:
#line 163 "./myyacc/myyacc.y"
{
	gen("opr", 0, 18);
	;
    break;}
case 47:
#line 167 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[0].id_val, level);
	gen("lod", level - table[i].l_v, table[i].addr);
	;
    break;}
case 48:
#line 171 "./myyacc/myyacc.y"
{
	gen("lit", 0, yyvsp[0].val);
	;
    break;}
case 49:
#line 174 "./myyacc/myyacc.y"
{
	int i = position(yyvsp[0].id_val, level);
	gen("lodarr", level - table[i].l_v, table[i].addr);
	;
    break;}
case 50:
#line 178 "./myyacc/myyacc.y"
{;
    break;}
case 51:
#line 179 "./myyacc/myyacc.y"
{
	gen("lit", 0, yyvsp[0].val);
	;
    break;}
case 52:
#line 182 "./myyacc/myyacc.y"
{
	gen("opr", 0, 17);
	;
    break;}
case 53:
#line 185 "./myyacc/myyacc.y"
{;
    break;}
case 54:
#line 188 "./myyacc/myyacc.y"
{
	gen("opr", 0, yyvsp[-1].rel_type);
	;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 192 "./myyacc/myyacc.y"


void yyerror(const char*s)
{
	printf("%s at line %d\n", s, yylineno);
}

int main(int argc, char** argv)
{
	FILE* fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("Cannot open the file!");
		return -1;
	}
	extern FILE* yyin;
	yyin = fp;
	printf("Begin parsing!\n");
	yyparse();
	printf("End parsing!\n");
	fclose(fp);
	printf("----------start writing codes!---------\n");
	gen("opr", 0, 0);
	writeCodes("mycodes.txt");
	printf("------------------Done!----------------\n");
	interpret();

	return 0;
}
