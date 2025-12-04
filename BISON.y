%{
#include <stdio.h>
#include <stdlib.h>
char buffer[256];
%}

%union {
	char* str;
}

%token <str> INTVAL
%token <str> FLOATVAL
%token <str> CHARVAL
%token <str> STRVAL
%token <str> BOOLVAL; 
%token <str> VARIABLE

%token <str> INT_TYPE FLOAT_TYPE STRING_TYPE CHAR_TYPE BOOL_TYPE
%token <str> IF ELSE FUNC RET CALL
%token <str> LARC RARC LBRACE RBRACE
%token <str> COUNTFROM WHILE PRINT PRECYCLE POWER
%token <str> GE LE EQ NE GT LT
%token <str> ASSIGN ADD SUB MUL DIV
%token <str> SEPARATOR
%token <str> UNKNOWN

%%

VAR_DECLARATION:
	VALUE ASSIGN NAME TYPE SEPARATOR
	{ printf("%s %s = %s;\n",$4,$3,$1); }
VALUE:
	INTVAL
	{ $$ = $1; }
	|
	FLOATVAL
	{ $$ = $1; }
	|
	CHARVAL
	{ $$ = $1; }
	|
	STRVAL
	{ $$ = $1; }
	|
	BOOLVAL
	{ $$ = $1; }
	|
	VALUE MATH_OPER VALUE
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	TERNAR_OPER VALUE VALUE
	{ sprintf(buffer, "%s%s%s", $2, $1, $3); $$ = strdup(buffer); }
	|
	LARC VALUE RARC
	{ $$ = $2; }
NAME:
	VARIABLE
	{ $$ = $1; }
TYPE:
	INT_TYPE
	{ $$ = $1; }
	|
	FLOAT_TYPE
	{ $$ = $1; }
	|
	CHAR_TYPE
	{ $$ = $1; }
	|
	STRING_TYPE
	{ $$ = $1; }
	|
	BOOL_TYPE
	{ $$ = $1; }
MATH_OPER:
	ADD
	{ $$ = $1; }
	|
	SUB
	{ $$ = $1; }
	|
	MUL
	{ $$ = $1; }
	|
	DIV
	{ $$ = $1; }
TERNAR_OPER:
	GE
	{ $$ = $1; }
	|
	LE
	{ $$ = $1; }
	|
	EQ
	{ $$ = $1; }
	|
	NE
	{ $$ = $1; }
	|
	GT
	{ $$ = $1; }
	|
	LT
	{ $$ = $1; }
INVALID:
	UNKNOWN
	{ $$ = $1; }
%%

int main() {
	yyparse();
	return 0;
}

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s\n", s);
}
