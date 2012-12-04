#ifndef GEN_H
#define GEN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "symtab.h"
#include "debug.h"
void write_output(char *o);
void set_func_context(int c);
void generate_line(char *line);
void generate_code(char *line);
void generate_data(char *line);
void generate_bss(char *line);
void generate_extern(char *line);
void generate_func(char *line);
void start_generation();
void stop_generation();
void push_int(int i);
void push_string(char *i);
void get_scalar(char *name);
void get_vector(char *name);
void declare_scalar(char *name, char *typecode, int size);
#endif
