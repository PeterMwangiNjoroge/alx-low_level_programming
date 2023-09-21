/*
* File: 5-string_toupper.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  string_toupper -  changes string to upper
*  @s: char arg
*  Return: char
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
