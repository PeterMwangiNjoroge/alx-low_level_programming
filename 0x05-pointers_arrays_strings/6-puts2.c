/*
* File: 6-puts2.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  puts2 - prints every other character of a string,
*  starting with the first character, followed by a new line.
*  @str: char arg
*  Return: nothing
*/

void puts2(char *str)
{
	int counter, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (counter = 0; counter < length; counter += 2)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
