/*
* File: 4-clear_bit.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: unsigned long int
* @index: unsigned long int
* Return: nothing
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}
	var = ~(1 << index);
	*n = *n & var;
	return (1);
}
