/*
* File: 4-print_alphabt.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints alphabet in lower case except for q and e
*
* Return: Always 0.
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');

	return (0);
}
