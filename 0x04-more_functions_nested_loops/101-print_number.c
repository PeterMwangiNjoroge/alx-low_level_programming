/*
* File: 101-print_number.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_number - prints an integer
* @n: int arg
* Return: 0
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
