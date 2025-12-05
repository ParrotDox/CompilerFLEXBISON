%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer[256];
int indent_level = 0;
int yylex(void);
void yyerror(const char *s);
%}

%start program

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
%token <str> COUNTFROM WHILE PRINT PRECYCLE POWER FOR
%token <str> GE LE EQ NE GT LT
%token <str> ASSIGN ADD SUB MUL DIV
%token <str> SEPARATOR ENUMERATOR COLON SPELL RETURN STAFF
%token <str> UNKNOWN

%type <str> VALUE NAME TYPE MATH_OPER TERNAR_OPER EXPR VAR_DECLARATION INVALID STATEMENT
%type <str> program BLOCK STATEMENTS FUNC_LINK FUNC_DECLARATION PARAMETERS PARAMETER

%%
program:
	
	| 
	program STATEMENTS
	{ printf("%s", $2); }
	;
BLOCK
	LBRACE STATEMENTS RBRACE
	{ sprintf(buffer,"{\n%s\n}",$2); $$ = strdup(buffer);}
STATEMENTS:
	STATEMENTS STATEMENT
	{ sprintf(buffer, "%s\n%s", $1, $2); $$ = strdup(buffer); }
	|
	STATEMENT
	{ $$ = $1; }
STATEMENT:
	VAR_DECLARATION
	{ $$ = $1;}
	|
	FUNC_LINK
	{ $$ = $1; }
	|
	FUNC_DECLARATION
	{ $$ = $1; }
	|
	BLOCK
	{ $$ = $1; }
	;
VAR_DECLARATION:
	EXPR ASSIGN NAME TYPE SEPARATOR
	{ sprintf(buffer, "%s %s = %s;",$4, $3, $1); $$ = strdup(buffer); }
FUNC_LINK:
	TYPE NAME LARC PARAMETERS RARC SEPARATOR
	{ sprintf(buffer, "%s %s(%s);",$1, $2, $4); $$ = strdup(buffer);}
FUNC_DECLARATION:
	TYPE NAME LARC PARAMETERS RARC COLON
	{ sprintf(buffer, "%s %s(%s):", $1, $2, $4); $$ = strdup(buffer); }
PARAMETERS:
	PARAMETERS PARAMETER
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
	|
	PARAMETER
	{ $$ = $1 }
PARAMETER:
	TYPE NAME
	{ sprintf(buffer, "%s %s", $1, $2); $$ = strdup(buffer); }
	TYPE NAME ENUMERATOR
	{ sprintf(buffer, "%s %s,", $1, $2); $$ = strdup(buffer); }
EXPR:
	VALUE
	{ $$ = $1; }
	|
	TERNAR_OPER EXPR EXPR 
	{ sprintf(buffer, "%s%s%s", $2, $1, $3); $$ = strdup(buffer); }
	|	
	EXPR MATH_OPER EXPR
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	LARC EXPR RARC
	{ $$ = $2; }
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
