/*
* File: 2-print_alphabet_x10.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* main - prints alphabet in lower case 10 times
*
* Return: Always 0.
*/
int main(void)
{
	char l;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}

	return (0);
}
