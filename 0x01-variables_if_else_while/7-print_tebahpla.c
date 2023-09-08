/*
* File: 7-print_tebahpla.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints alphabet in reverse lower case
*
* Return: Always 0.
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
