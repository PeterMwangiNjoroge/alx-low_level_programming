/*
* File: 6-print_line.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: input argument
* Return: nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
