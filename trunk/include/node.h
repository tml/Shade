#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef enum instruction {
	MAIN_PROGRAM,
	STATEMENT_LIST,
	EXPRESSION_LIST,
	BLOCK,
	DECLARE_INTEGER,
	DECLARE_DOUBLE,
	DECLARE_STRING,
	CONST_INTEGER,
	CONST_DOUBLE,
	GET_VARIABLE,
	CALL_FUNCTION,
	ASSIGN,
	IF,
	WHILE,
	PLUS,
	MINUS,
	MUL,
	DIV,
	EQ,
	NE,
	LT,
	LE,
	GT,
	GE
} instruction;

typedef struct node {
	instruction ins;
	struct node *arg1;
	struct node *arg2;
	void *val;
} node;

node *make_node(instruction ins, node *arg1, node *arg2, void *val, size_t type_size);
node *const_double(double val);
node *const_integer(int val);
node *get_variable(const char *name);

#endif
