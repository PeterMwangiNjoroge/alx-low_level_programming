/*
* File: 0-binary_to_uint.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* binary_to_uint -  converts a binary number to an unsigned int.
* @b: is pointing to a string of 0 and 1 chars
* Return: unsigned int, converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0, counter;

	if (!b)
	{
		return (0);
	}
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
		{
			return (0);
		}
		output = (output << 1) | (b[counter] - '0');
	}
	return (output);
}
