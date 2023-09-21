/*
* File: 0-strcat.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strcat -  appends the src string to the dest string,
*  overwriting the terminating null byte (\0)
*  @dest: char arg
*  @src: char arg
*  Return: char
*/

char *_strcat(char *dest, char *src)
{
	char *word = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (word);
}
