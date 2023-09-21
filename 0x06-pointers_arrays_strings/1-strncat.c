/*
* File: 1-strncat.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strncat -  appends the src string to the dest string,
*  overwriting the terminating null byte (\0)
*  @dest: char arg
*  @src: char arg
*  @n: int arg
*  Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
