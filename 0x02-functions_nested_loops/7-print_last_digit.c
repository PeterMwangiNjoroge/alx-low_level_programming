/*
* File: 7-print_last_digit.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_last_digit - gets the last digit of supplied arg.
* @n: The integer argument.
*
* Return: last digit of n.
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
