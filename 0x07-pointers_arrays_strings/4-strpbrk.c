/*
* File: 4-strpbrk.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdio.h>

/**
*  _strpbrk -  searches a string for any of a set of bytes.
*  @s: char arg
*  @accept: char arg
*  Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
