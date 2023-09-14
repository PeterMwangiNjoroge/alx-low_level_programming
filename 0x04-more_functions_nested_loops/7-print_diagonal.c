/*
* File: 7-print_diagonal.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: input argument
* Return: nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
