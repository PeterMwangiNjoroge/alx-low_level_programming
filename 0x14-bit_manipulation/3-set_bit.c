/*
* File: 3-set_bit.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: unsigned long int
* @index: unsigned long int
* Return: int, 1 if it worked, or -1 if an error occurred
*/


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}

	var = 1 << index;
	*n = *n | var;

	return (1);
}
