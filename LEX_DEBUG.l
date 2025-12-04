%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include "bison.tab.y"
%}

%%

~                            		{ printf("SEPARATOR: %s\n", yytext); }
:			{ printf("COLON: %s\n", yytext); }

\#[0-9]+\#                     	{ printf("INTVAL: %s\n", yytext); }
![0-9]+(\.[0-9]+)?!          	{ printf("FLOATVAL: %s\n", yytext); }
`[A-Za-z0-9_]{1}` 		{ printf("CHARVAL: %s\n", yytext); }
@[A-Za-z0-9_ ]*@              	{ printf("STRVAL: %s\n", yytext); }
"&correct&"                    	{ printf("BOOLVAL: %s\n", yytext); }
"&bluf&"                       	{ printf("BOOLVAL: %s\n", yytext); }
\?[a-zA-Z_][a-zA-Z0-9_]*\?   	{ printf("VARIABLE: %s\n", yytext); }

"flotless"                     		{ printf("INT_TYPE: %s\n", yytext); }
"flot"                         		{ printf("FLOAT_TYPE: %s\n", yytext); }
"bard"                         		{ printf("STRING_TYPE: %s\n", yytext); }
"bell"                         		{ printf("CHAR_TYPE: %s\n", yytext); }
"bull"                         		{ printf("BOOL_TYPE: %s\n", yytext); }

"fork"                         		{ printf("IF: %s\n", yytext); }
"nork"                         		{ printf("ELSE: %s\n", yytext); }

"spell"                        		{ printf("FUNC: %s\n", yytext); }
"throw"                        		{ printf("RET: %s\n", yytext); }
"->"                           		{ printf("CALL: %s\n", yytext); }

"<"                            		{ printf("LARC: %s\n", yytext); }
">"                            		{ printf("RARC: %s\n", yytext); }

"{"                            		{ printf("LBRACE: %s\n", yytext); }
"}"                            		{ printf("RBRACE: %s\n", yytext); }

"countfrom"                    	{ printf("COUNTFROM: %s\n", yytext); }
"aslongas"                     	{ printf("WHILE: %s\n", yytext); }

"scream"                       		{ printf("PRINT: %s\n", yytext); }
"precycle"                     		{ printf("PRECYCLE: %s\n", yytext); }
"power"                        		{ printf("POWER: %s\n", yytext); }

"sameoverwhelm"                	{ printf("GE: %s\n", yytext); }
"samelackof"                   	{ printf("LE: %s\n", yytext); }
"sameof"                       		{ printf("EQ: %s\n", yytext); }
"notsameof"                    	{ printf("NE: %s\n", yytext); }
"overwhelm"                  	{ printf("GT: %s\n", yytext); }
"lackof"                      		{ printf("LT: %s\n", yytext); }

"="                            		{ printf("ASSIGN: %s\n", yytext); }
"boost"                       		{ printf("ADD: %s\n", yytext); }
"cut"                          		{ printf("SUB: %s\n", yytext); }
"grow"                         		{ printf("MUL: %s\n", yytext); }
"bamboozle"                  	{ printf("DIV: %s\n", yytext); }

[ \t\r\n]+                     		{ /* skip */ }
.                              		{ printf("UNKNOWN: %s\n", yytext); }

%%
