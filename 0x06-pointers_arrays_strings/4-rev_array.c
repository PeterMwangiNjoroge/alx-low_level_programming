/*
* File: 4-rev_array.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  reverse_array -  this function reverses a string
*  @a: array
*  @n: size of array
*  Return: int
*/

void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
