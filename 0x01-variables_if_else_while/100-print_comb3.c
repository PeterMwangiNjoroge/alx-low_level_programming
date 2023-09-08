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
	int i = 0, j = 0;

	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 9 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
