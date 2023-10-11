#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_

#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif
