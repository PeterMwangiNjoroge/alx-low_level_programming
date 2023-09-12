/*
* File: 2-print_alphabet_x10.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lower case 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
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
}
