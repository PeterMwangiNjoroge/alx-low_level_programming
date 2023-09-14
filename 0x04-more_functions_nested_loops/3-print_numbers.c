/*
* File: 3-print_numbers.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_numbers - print numbers 0-9
* Return: nothing
*/
void print_numbers(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
}
