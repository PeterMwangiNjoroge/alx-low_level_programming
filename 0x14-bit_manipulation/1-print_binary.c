/*
* File: 1-print_binary.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: is the number to convert
* Return: nothing
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/* print '1' if the least significant bit is 1, and '0' if it is 0.*/
	_putchar((n & 1) ? '1' : '0');
}
