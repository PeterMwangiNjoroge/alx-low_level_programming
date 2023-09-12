/*
* File: 1-alphabet.c
* Author: Peter Njoroge
*/

#include "main.h"

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
		_putchar(l);
	}
	_putchar('\n');
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
