/*
* File: 100-print_comb3.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
* main - Write a program that prints all possible
* different combinations of two digits.
*
* Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
