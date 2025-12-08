
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BISON.tab.h"

char* strip_delimiters(const char* yytext) 
{
	int len = strlen(yytext);
	if (len < 2) return strdup("");

	char* result = (char*)malloc(len - 1);  // len-2 символа + '\0'
	if (!result) return NULL;

	strncpy(result, yytext + 1, len - 2);
	result[len - 2] = '\0';
	return result;
}
%}

%%
"[CALL HERCULES]"					{ yylval.str = strdup("#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <ctype.h>\n#include <stdbool.h>");				return CALLHERCULES; }

\#[0-9]+\#                     	{ yylval.str = strdup(strip_delimiters(yytext)); 	return INTVAL; }
\![0-9]+(\.[0-9]+)?\!          	{ yylval.str = strdup(strip_delimiters(yytext)); 	return FLOATVAL; }
\`[A-Za-z0-9_]{1}\` 			{ yylval.str = strdup(strip_delimiters(yytext));	return CHARVAL; }
\@.*\@             {
    								char* stripped = strip_delimiters(yytext);
    								// Добавляем кавычки
    								yylval.str = malloc(strlen(stripped) + 3);
    								sprintf(yylval.str, "\"%s\"", stripped);
    								free(stripped);  // Освобождаем промежуточную строку
    								return STRVAL;
}
\?[a-zA-Z_][a-zA-Z0-9_]*\?   	{ yylval.str = strdup(strip_delimiters(yytext)); 	return VARIABLE; }
"&truth&"                    	{ yylval.str = strdup("true"); 						return BOOLVAL; }
"&bluf&"                       	{ yylval.str = strdup("false"); 					return BOOLVAL; }


"countfrom"                    	{ yylval.str = strdup("for");						return FOR; }
"aslongas"                     	{ yylval.str = strdup("while");						return WHILE; }

"scream"                       	{ yylval.str = strdup("printf");					return PRINT; }
"precycle"                     	{ yylval.str = strdup("precycle");					return PRECYCLE; }

"dominion"                		{ yylval.str = strdup(">=");						return GE; }
"submission"                   	{ yylval.str = strdup("<=");						return LE; }
"congruence"                    { yylval.str = strdup("==");						return EQ; }
"dispersion"                    { yylval.str = strdup("!=");						return NE; }
"ascendacy"                  	{ yylval.str = strdup(">");							return GT; }
"subjugation"                   { yylval.str = strdup("<");							return LT; }

"boost"                       	{ yylval.str = strdup("+");							return ADD; }
"cut"                          	{ yylval.str = strdup("-");							return SUB; }
"grow"                         	{ yylval.str = strdup("*");							return MUL; }
"bamboozle"                  	{ yylval.str = strdup("/");							return DIV; }

"flotless"                     	{  yylval.str = strdup("int");  					return INT_TYPE; }
"flot"                         	{  yylval.str = strdup("float"); 					return FLOAT_TYPE; }
"bell"                        	{  yylval.str = strdup("char"); 					return CHAR_TYPE; }
"bard"                         	{  yylval.str = strdup("char*"); 					return STRING_TYPE; }
"bull"                         	{  yylval.str = strdup("bool"); 					return BOOL_TYPE; }
"void"                   	 	{  yylval.str = strdup("void"); 					return VOID_TYPE; }

"norkfork"						{ yylval.str = strdup("else if");					return ELSEIF; }
"fork"                         	{ yylval.str = strdup("if");						return IF; }
"nork"                         	{ yylval.str = strdup("else");						return ELSE; }

"\[learnspell\]"				{ yylval.str = strdup("[learnspell]");				return LEARNSPELL; }
"spell"                        	{ yylval.str = strdup("spell");						return SPELL; }
"throw"                        	{ yylval.str = strdup("return");					return RETURN; }

"->"                           	{ yylval.str = strdup("wizardstaff");				return STAFF; }
"="                            	{ yylval.str = strdup("=");							return ASSIGN; }
~                            	{ yylval.str = strdup(";"); 						return SEPARATOR; }
\,                            	{ yylval.str = strdup(","); 						return ENUMERATOR; }
:								{ yylval.str = strdup(":"); 						return COLON;}
"<"                            	{ yylval.str = strdup("(");							return LARC; }
">"                            	{ yylval.str = strdup(")");							return RARC; }
"{"                            	{ yylval.str = strdup("{");							return LBRACE; }
"}"                            	{ yylval.str = strdup("}");							return RBRACE; }

\[[^\]]+\]                    	{ yylval.str = strdup(strip_delimiters(yytext)); 	return INCLUDE; }

[ \t\r\n]+                     	{ /* skip */ }
.                              	{ yylval.str = strdup("unknown");					return UNKNOWN; }

%%

int yywrap() { return 1; }
