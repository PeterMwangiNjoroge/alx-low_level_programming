/*
* File: 5-flip_bits.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* flip_bits - returns the number of bits you would need
* to flip to get from one number to another.
* @n: unsigned long int
* @m: unsigned long int
* Return: unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m, counter = 0;

	while (result)
	{
		counter += result & 1;
		result >>= 1;
	}
	return (counter);
}
