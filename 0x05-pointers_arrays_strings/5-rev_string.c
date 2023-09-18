/*
* File: 5-rev_string.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  rev_string -  reverses a string.
*  @s: char arg
*  Return: nothing
*/

void rev_string(char *s)
{
	int counter, length, length_1;

	char temp;

	while (s[length] != '\n')
	{
		length++;
	}
	length_1 = length - 1;
	for (counter = 0; counter < length / 2; counter++)
	{
		temp = s[counter];
		s[counter] = s[length_1];
		s[length_1--] = temp;
	}
}
