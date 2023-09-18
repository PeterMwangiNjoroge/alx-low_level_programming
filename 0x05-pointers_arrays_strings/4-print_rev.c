/*
* File: 4-print_rev.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  print_rev - prints a string, in reverse, followed by a new line.
*  @s: char arg
*  Return: nothing
*/

void print_rev(char *s)
{
	int pointer = 0, count, length;

	while (s[pointer] != '\0')
		pointer++;

	length = pointer;
	for (count = length - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
