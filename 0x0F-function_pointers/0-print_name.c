/*
* File: 5-free_dog.c
* Author: Peter Njoroge
*/

#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: char
 * @f: pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
