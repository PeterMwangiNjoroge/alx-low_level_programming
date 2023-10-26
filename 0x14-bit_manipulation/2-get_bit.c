/*
* File: 2-get_bit.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: unsigned long int
* @index: unsigned long int
* Return: nothing
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int var;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}
	var = n >> index;
	return (var & 1);
}
