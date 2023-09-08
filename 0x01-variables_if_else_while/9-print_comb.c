/*
* File: 9-print_comb.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
* main - Write a program that prints all possible
* combinations of single-digit numbers.
*
* Return: Always 0.
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			break;

		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('\n');

	return (0);
}
