/*
* File: 7-puts_half.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  puts_half - print the second half of the string
*  @str: char arg
*  Return: nothing
*/

void puts_half(char *str)
{
	int counter, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length + 1 % 2 != '0')
	{
		counter = (length - 1) / 2;
	}
	else
	{
		counter = (length / 2);
	}

	for (length = counter; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
