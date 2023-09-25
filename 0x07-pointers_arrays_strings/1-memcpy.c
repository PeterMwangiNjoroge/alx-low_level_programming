/*
* File: 1-memcpy.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _memcpy - copies memory area.
*  @dest: char arg
*  @src: char arg
*  @n: unsigned int arg
*  Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
