/*
* File: 0-memset.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _memset - fills memory with a constant byte.
*  @s: char arg
*  @b: char arg
*  @n: unsigned int arg
*  Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
