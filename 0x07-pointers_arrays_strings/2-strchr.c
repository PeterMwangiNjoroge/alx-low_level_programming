/*
* File: 2-strchr.c
* Author: Peter Njoroge
*/

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

	return (NULL);
}
