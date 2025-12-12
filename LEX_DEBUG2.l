
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD
#include "BISON.tab.y"
=======
#include "BISON.tab.h"
>>>>>>> 0361e544df99ff0489ec8ba1030f8588d107c011

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
<<<<<<< HEAD

~                            	{ yylval.str = ";"; 				return SEPARATOR; }
:				{ yylval.str = ":"; 				return COLON;}

\#[0-9]+\#                     	{ yylval.str = strip_delimiters(yytext); 	return INTVAL; }
![0-9]+(\.[0-9]+)?!          	{ yylval.str = strip_delimiters(yytext); 	return FLOATVAL; }
`[A-Za-z0-9_]{1}` 		{ yylval.str = strip_delimiters(yytext);	return CHARVAL; }
@[A-Za-z0-9_ ]*@              	{ yylval.str = strip_delimiters(yytext);	return STRVAL; }
"&correct&"                    	{ yylval.str = "true"; 				return BOOLVAL; }
"&bluf&"                       	{ yylval.str = "false"; 			return BOOLVAL; }
=======
"\[CALL HERCULES]"					{ yylval.str = "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <ctype.h>\n#include <stdbool.h>";				return CALLHERCULES; }

\#[0-9]+\#                     	{ yylval.str = strip_delimiters(yytext); 	return INTVAL; }
\![0-9]+(\.[0-9]+)?\!          	{ yylval.str = strip_delimiters(yytext); 	return FLOATVAL; }
\`[A-Za-z0-9_]{1}\` 			{ yylval.str = strip_delimiters(yytext);	return CHARVAL; }
\@.*\@             {
    								char* stripped = strip_delimiters(yytext);
    								// Добавляем кавычки
    								yylval.str = malloc(strlen(stripped) + 3);
    								sprintf(yylval.str, "\"%s\"", stripped);
    								free(stripped);  // Освобождаем промежуточную строку
    								return STRVAL;
}
>>>>>>> 0361e544df99ff0489ec8ba1030f8588d107c011
\?[a-zA-Z_][a-zA-Z0-9_]*\?   	{ yylval.str = strip_delimiters(yytext); 	return VARIABLE; }
"&truth&"                    	{ yylval.str = "true"; 						return BOOLVAL; }
"&bluf&"                       	{ yylval.str = "false"; 					return BOOLVAL; }

<<<<<<< HEAD
"flotless"                     	{  yylval.str = "int";  			return INT_TYPE; }
"flot"                         	{  yylval.str = "float"; 			return FLOAT_TYPE; }
"bell"                        	{  yylval.str = "char"; 			return CHAR_TYPE; }
"bard"                         	{  yylval.str = "char*"; 			return STRING_TYPE; }
"bull"                         	{  yylval.str = "bool"; 			return BOOL_TYPE; }

"fork"                         	{ yylval.str = "if";				return IF; }
"nork"                         	{ yylval.str = "else";				return ELSE; }

"spell"                        	{ yylval.str = "spell";				return SPELL; }
"throw"                        	{ yylval.str = "return";			return RETURN; }
"->"                           	{ yylval.str = "wizardstaff";			return STAFF; }

"<"                            	{ yylval.str = "(";				return LARC; }
">"                            	{ yylval.str = ")";				return RARC; }

"{"                            	{ yylval.str = "{";				return LBRACE; }
"}"                            	{ yylval.str = "}";				return RBRACE; }

"countfrom"                    	{ yylval.str = "for";				return FOR; }
"aslongas"                     	{ yylval.str = "while";				return WHILE; }

"scream"                       	{ yylval.str = "printf";			return PRINT; }
"precycle"                     	{ yylval.str = "precycle";			return PRECYCLE; }
"power"                        	{ yylval.str = "power";				return POWER; }

"sameoverwhelm"                	{ yylval.str = ">=";				return GE; }
"samelackof"                   	{ yylval.str = "<=";				return LE; }
"sameof"                       	{ yylval.str = "==";				return EQ; }
"notsameof"                    	{ yylval.str = "!=";				return NE; }
"overwhelm"                  	{ yylval.str = ">";				return GT; }
"lackof"                      	{ yylval.str = "<";				return LT; }

"="                            	{ yylval.str = "=";				return ASSIGN; }
"boost"                       	{ yylval.str = "+";				return ADD; }
"cut"                          	{ yylval.str = "-";				return SUB; }
"grow"                         	{ yylval.str = "*";				return MUL; }
"bamboozle"                  	{ yylval.str = "/";				return DIV; }

[ \t\r\n]+                     	{ /* skip */ }
.                              	{ yylval.str = "unknown";			return UNKNOWN; }
=======

"countfrom"                    	{ yylval.str = "for";						return FOR; }
"aslongas"                     	{ yylval.str = "while";						return WHILE; }

"scream"                       	{ yylval.str = "printf";					return PRINT; }
"precycle"                     	{ yylval.str = "precycle";					return PRECYCLE; }

"dominion"                		{ yylval.str = ">=";						return GE; }
"submission"                   	{ yylval.str = "<=";						return LE; }
"congruence"                    { yylval.str = "==";						return EQ; }
"dispersion"                    { yylval.str = "!=";						return NE; }
"ascendacy"                  	{ yylval.str = ">";							return GT; }
"subjugation"                   { yylval.str = "<";							return LT; }

"boost"                       	{ yylval.str = "+";							return ADD; }
"cut"                          	{ yylval.str = "-";							return SUB; }
"grow"                         	{ yylval.str = "*";							return MUL; }
"bamboozle"                  	{ yylval.str = "/";							return DIV; }

"flotless"                     	{  yylval.str = "int";  					return INT_TYPE; }
"flot"                         	{  yylval.str = "float"; 					return FLOAT_TYPE; }
"bell"                        	{  yylval.str = "char"; 					return CHAR_TYPE; }
"bard"                         	{  yylval.str = "char*"; 					return STRING_TYPE; }
"bull"                         	{  yylval.str = "bool"; 					return BOOL_TYPE; }
"void"                   	 	{  yylval.str = "void"; 					return VOID_TYPE; }

"norkfork"						{ yylval.str = "else if";					return ELSEIF; }
"fork"                         	{ yylval.str = "if";						return IF; }
"nork"                         	{ yylval.str = "else";						return ELSE; }

"\[learnspell\]"				{ yylval.str = "[learnspell]";				return LEARNSPELL; }
"spell"                        	{ yylval.str = "spell";						return SPELL; }
"throw"                        	{ yylval.str = "return";					return RETURN; }

"->"                           	{ yylval.str = "wizardstaff";				return STAFF; }
"="                            	{ yylval.str = "=";							return ASSIGN; }
~                            	{ yylval.str = ";"; 						return SEPARATOR; }
\,                            	{ yylval.str = ","; 						return ENUMERATOR; }
:								{ yylval.str = ":"; 						return COLON;}
"<"                            	{ yylval.str = "(";							return LARC; }
">"                            	{ yylval.str = ")";							return RARC; }
"{"                            	{ yylval.str = "{";							return LBRACE; }
"}"                            	{ yylval.str = "}";							return RBRACE; }

\[[^\]]+\]                    	{ yylval.str = strip_delimiters(yytext); 	return INCLUDE; }

[ \t\r\n]+                     	{ /* skip */ }
.                              	{ yylval.str = "unknown";					return UNKNOWN; }
>>>>>>> 0361e544df99ff0489ec8ba1030f8588d107c011

%%

int yywrap() { return 1; }
