/*
* File: 3-strspn.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strspn -  gets the length of a prefix substring.
*  @s: char arg
*  @accept: char arg
*  Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			k++;
			l = 1;
		}
		if (l == 0)
		{
			return (k);
		}
	}
	return (0);
}
