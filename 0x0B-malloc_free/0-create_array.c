/*
* File: 0-create_array.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdlib.h>

/**
*  create_array - prints its name, followed by a new line.
*  @size: int arg
*  @c: char arg
*  Return: int
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
