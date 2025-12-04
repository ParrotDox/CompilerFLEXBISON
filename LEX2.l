%option noyywrap

%{
#include <stdio.h>
%}

%%

~			return SEPARATOR;

\#[0-9]+\#			return INTVAL;
\![0-9]+(\.[0-9]+)?\!		return FLOATVAL;
\@[A-Za-z0-9_]*\@ 		return STRVAL;
&correct&			return BOOLVAL;
&bluf&			return BOOLVAL;
\?[a-zA-Z_][a-zA-Z0-9_]*\?	return VARIABLE;

flotless			return INT_TYPE;
flot			return FLOAT_TYPE;
bard			return STRING_TYPE;
bell			return CHAR_TYPE;
bull			return BOOL_TYPE;

fork			return IF;
nork			return ELSE;

spell			return FUNC;
throw			return RET;
->			return CALL;

<			return LARC;
>			return RARC;

{			return LBRACE;
}			return RBRACE;

countfrom			return COUNTFROM;	
aslongas			return WHILE;

scream			return PRINT;
precycle			return PRECYCLE;
power			return POWER;

sameoverwhelm		return GE;
samelackof			return LE;
sameof 			return EQ;
notsameof			return NE;
overwhelm			return GT;
lackof			return LT;

=			return ASSIGN;
boost			return ADD;
cut			return SUB;
grow			return MUL;
bamboozle			return DIV;	

[ \t\r\n]+ 			;
.			;
%%

int main(){
	yylex();
	printf("\nLexer end");
	return 0;
}