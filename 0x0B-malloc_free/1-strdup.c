/*
* File: 0-create_array.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdlib.h>

/**
*  _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
*  @str: char arg
*  Return: char
*/

char *_strdup(char *str)
{
	char *ch;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ch = malloc(sizeof(char) * (len + 1));

	if (ch == NULL)
		return (NULL);

	while ((ch[i] = str[i]) != '\0')
		i++;

	return (ch);
}
