%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer[2048];
int yylex(void);
void yyerror(const char *s);
%}

%start program

%union {
	char* str;
}


%token <str> CALLHERCULES INCLUDE
%token <str> INTVAL FLOATVAL CHARVAL STRVAL BOOLVAL VARIABLE
%token <str> INT_TYPE FLOAT_TYPE STRING_TYPE CHAR_TYPE BOOL_TYPE VOID_TYPE
%token <str> IF ELSEIF ELSE RET CALL
%token <str> LARC RARC LBRACE RBRACE
%token <str> WHILE FOR PRINT PRECYCLE POWER
%token <str> GE LE EQ NE GT LT
%token <str> ASSIGN ADD SUB MUL DIV
%token <str> SEPARATOR ENUMERATOR COLON SPELL RETURN STAFF LEARNSPELL
%token <str> UNKNOWN

%type <str> program BLOCK STATEMENTS STATEMENT
%type <str> CONSOLE_OUTPUT
%type <str> PYCLE
%type <str> LOOP COUNTFROM ASLONGAS
%type <str> NORKFORK NORK FORK CONDITION
%type <str> FUNC_HEADER_WITH_PARAMS FUNC_HEADER FUNC_HEADER_PARAMS RET_VAL
%type <str> FUNC_CALL_WITH_ARGS FUNC_CALL_ARGS FUNC_CALL_PART
%type <str> FULL_PARTIAL_INITS PARTIAL_INITS FULL_INIT PARTIAL_INIT VAR_DECLARE VALUE_ASSIGN
%type <str> EXPR
%type <str> MATH_EXPR SUBADD MULDIV
%type <str> BOOL_EXPR
%type <str> ATOM ARCS
%type <str> VALUE TYPE COMPARE_OPER

%left ADD SUB
%left MUL DIV
%nonassoc GE LE EQ NE GT LT
%nonassoc LARC RARC

%%
program:
	STATEMENTS
	{ printf("%s", $1); }
//BLOCK - это максимальные ГРУППИРОВАННЫЕ по размеру блоки программы, подающиеся на вывод
BLOCK:
	LBRACE STATEMENTS RBRACE
	{ sprintf(buffer, "%s\n%s\n%s", $1, $2, $3); $$ = strdup(buffer); }
//Statements - это максимальные по размеру блоки программы, подающиеся на вывод
STATEMENTS:
	STATEMENT
	{ $$ = $1; }
	|
	STATEMENTS STATEMENT
	{ sprintf(buffer, "%s\n%s", $1, $2); $$ = strdup(buffer); free($1); }
STATEMENT:
	EXPR SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	FULL_INIT SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	VAR_DECLARE SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	PARTIAL_INIT SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	FUNC_CALL_WITH_ARGS SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	FUNC_HEADER_WITH_PARAMS
	{ $$ = $1; }
	|
	NORKFORK
	{ $$ = $1; }
	|
	NORK
	{ $$ = $1; }
	|
	FORK
	{ $$ = $1; }
	|
	LOOP
	{ $$ = $1; }
	|
	BLOCK
	{ $$ = $1; }
	|
	PYCLE
	{ $$ = $1; }
	|
	CONSOLE_OUTPUT SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }
	|
	CALLHERCULES
	{ $$ = $1; }
	|
	INCLUDE
	{ sprintf(buffer, "#include %s", $1); $$ = strdup(buffer); }
	|
	RET_VAL SEPARATOR
	{ sprintf(buffer, "%s%s", $1,$2); $$ = strdup(buffer); }


//Вывод в консоль
CONSOLE_OUTPUT:
	PRINT LARC EXPR INT_TYPE RARC
	{ 
		sprintf(buffer, "printf(\"%%d\\n\", %s)", $3); $$ = strdup(buffer); 
	}
	|
	PRINT LARC EXPR FLOAT_TYPE RARC
	{ 
		sprintf(buffer, "printf(\"%%f\\n\", %s)", $3); $$ = strdup(buffer); 
	}
        |
	PRINT LARC EXPR STRING_TYPE RARC
	{ 
		sprintf(buffer, "printf(\"%%s\\n\", %s)", $3); $$ = strdup(buffer); 
	}
	|
	PRINT LARC EXPR CHAR_TYPE RARC
	{ 
		sprintf(buffer, "printf(\"%%c\\n\", %s)", $3); $$ = strdup(buffer);
	}
        |
	PRINT LARC EXPR BOOL_TYPE RARC
	{ 
		sprintf(buffer, "printf(\"%%d\\n\", %s)", $3); $$ = strdup(buffer);
	}
//Цикл с предусловием
PYCLE:
	//  1      2      3        4                5           6         7        8           9          10    11
	PRECYCLE LARC CONDITION SEPARATOR FULL_PARTIAL_INITS SEPARATOR CONDITION SEPARATOR PARTIAL_INITS RARC BLOCK
	{ 
		sprintf(buffer, "if%s%s%s\n{\nfor%s%s%s%s%s%s%s\n%s\n}", $2, $3, $10, $2, $5, $6, $7, $8, $9, $10, $11);
		$$ = strdup(buffer); 
	}


//Циклы
LOOP:
	COUNTFROM
	{ $$ = $1; }
	|
	ASLONGAS
	{ $$ = $1; }
COUNTFROM:
	FOR LARC FULL_PARTIAL_INITS SEPARATOR CONDITION SEPARATOR PARTIAL_INITS RARC
	{ 
		sprintf(buffer, "%s%s%s%s%s%s%s%s", $1, $2, $3, $4, $5, $6, $7, $8); 
		$$ = strdup(buffer); 
	}
ASLONGAS:
	WHILE LARC CONDITION RARC
	{ sprintf(buffer, "%s%s%s%s", $1, $2, $3, $4); $$ = strdup(buffer); }


//Операторы ветвлений
NORKFORK:
	ELSEIF LARC CONDITION RARC
	{ sprintf(buffer, "%s%s%s%s", $1, $2, $3, $4); $$ = strdup(buffer); }
NORK:
	ELSE
	{ $$ = $1; }
FORK:
	IF LARC CONDITION RARC
	{ sprintf(buffer, "%s%s%s%s", $1, $2, $3, $4); $$ = strdup(buffer); }
CONDITION:
	EXPR
	{ $$ = $1; }


//Возврат значения
RET_VAL:
	RETURN VOID_TYPE
	{ $$ = $1;  }
	|
	RETURN FUNC_CALL_WITH_ARGS
	{ sprintf(buffer, "%s %s", $1,$2); $$ = strdup(buffer); }
	|
	RETURN EXPR
	{ sprintf(buffer, "%s %s", $1,$2); $$ = strdup(buffer); }
//Создание заголовка функции
FUNC_HEADER_WITH_PARAMS:
	FUNC_HEADER FUNC_HEADER_PARAMS
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
FUNC_HEADER:
	LEARNSPELL TYPE STAFF VARIABLE
	{ sprintf(buffer, "%s %s", $2, $4); $$ = strdup(buffer); }
FUNC_HEADER_PARAMS:
	ARCS
	{ $$ = $1; }
	|
	LARC VAR_DECLARE
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
	|
	FUNC_HEADER_PARAMS ENUMERATOR VAR_DECLARE
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	FUNC_HEADER_PARAMS RARC
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }

//Создание вызова функции
FUNC_CALL_WITH_ARGS:
	FUNC_CALL_PART FUNC_CALL_ARGS
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
FUNC_CALL_PART:
	SPELL STAFF VARIABLE
	{ sprintf(buffer, "%s", $3); $$ = strdup(buffer); }
FUNC_CALL_ARGS:
	ARCS
	{ $$ = $1; }
	|
	LARC ATOM
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
	|
	FUNC_CALL_ARGS ENUMERATOR ATOM
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	FUNC_CALL_ARGS RARC
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }


//Объявление и присваивание переменной (FULL_PARTIAL_INITS и PARTIAL_INITS для цикла for!)
FULL_PARTIAL_INITS:
	FULL_INIT
	{ $$ = $1; }
	|
	FULL_PARTIAL_INITS ENUMERATOR PARTIAL_INITS
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
PARTIAL_INITS:
	PARTIAL_INIT
	{ $$ = $1; }
	|
	PARTIAL_INITS ENUMERATOR PARTIAL_INIT
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
FULL_INIT:
	VALUE_ASSIGN VAR_DECLARE
	{ sprintf(buffer, "%s%s", $2, $1); $$ = strdup(buffer); }
PARTIAL_INIT:
	VALUE_ASSIGN VARIABLE
	{ sprintf(buffer, "%s%s", $2, $1); $$ = strdup(buffer); }
VAR_DECLARE:
	VARIABLE TYPE
	{ sprintf(buffer, "%s %s", $2, $1); $$ = strdup(buffer); }
VALUE_ASSIGN:
	EXPR ASSIGN
	{ sprintf(buffer, "%s%s", $2, $1); $$ = strdup(buffer); }
	|
	FUNC_CALL_WITH_ARGS ASSIGN
	{ sprintf(buffer, "%s%s", $2, $1); $$ = strdup(buffer); }


//Объединение нетерминалов операций
EXPR:
	MATH_EXPR
	{ $$ = $1; }
	|
	BOOL_EXPR
	{ $$ = $1; }

//Обработка математических операций
MATH_EXPR:
	SUBADD
	{ $$ = $1; }
SUBADD:
	MULDIV
	{ $$ = $1; }
	|
	SUBADD SUB MULDIV
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	SUBADD ADD MULDIV
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
MULDIV:
	ATOM
	{ $$ = $1; }
	|
	MULDIV MUL ATOM
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }
	|
	MULDIV DIV ATOM
	{ sprintf(buffer, "%s%s%s", $1, $2, $3); $$ = strdup(buffer); }

//Обработка условных операций
BOOL_EXPR:
	COMPARE_OPER LARC ATOM ENUMERATOR ATOM RARC
	{ sprintf(buffer, "%s%s%s", $3, $1, $5); $$ = strdup(buffer); }

//Обобщение терминалов и схлопывание выражений
ATOM:
	VALUE
	{ $$ = $1; }
	|
	VARIABLE
	{ $$ = $1; }
	|
	LARC EXPR RARC
	{ sprintf(buffer, "%s%s%s", $1,$2,$3); $$ = strdup(buffer); }
ARCS:
	LARC RARC
	{ sprintf(buffer, "%s%s", $1, $2); $$ = strdup(buffer); }
// ТЕРМИНАЛЫ
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
	;
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
	|
	VOID_TYPE
	{ $$ = $1; }
COMPARE_OPER:
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
	;
%%

int main() {
	yyparse();
	return 0;
}

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s\n", s);
}
