/*
* File: 2-strchr.c
* Author: Peter Njoroge
*/

#include <stdio.h>
#include "main.h"

/**
*  _strchr -  locates a character in a string.
*  @s: char arg
*  @c: char arg
*  Return: char
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
