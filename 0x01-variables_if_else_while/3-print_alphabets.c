/*
* File: 3-print_alphabets.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints alphabet in lower case and uppercase
*
* Return: Always 0.
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
