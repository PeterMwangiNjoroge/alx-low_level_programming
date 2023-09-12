/*
* File: 2-print_alphabet.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* print_alphabet - prints alphabet in lower case
*
* Return: void.
*/
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
}

/**
* main - prints alphabet in lower case
*
* Return: Always 0.
*/
int main(void)
{
	print_alphabet();
	return (0);
}
