/*
* File: 8-print_base16.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
* main - prints all hexadecimals
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
