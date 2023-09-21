/*
* File: 2-strncpy.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strncpy -  appends the src string to the dest string,
*  overwriting the terminating null byte (\0)
*  @dest: char arg
*  @src: char arg
*  @n: int arg
*  Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
