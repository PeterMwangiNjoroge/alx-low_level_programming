/*
* File: 0-malloc_checked.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdlib.h>

/**
*  malloc_checked - allocates memory using malloc.
*  @b: int arg
*  Return: int
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
