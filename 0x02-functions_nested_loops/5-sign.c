/*
* File: 5-sign.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @n: The integer to be computed.
*
* Return: absolute value of n.
*/
int _abs(int n)
{
	if (n < 0)
	{
	int abs_value = n * -1;

	return (abs_value);
	}
	return (n);
}
