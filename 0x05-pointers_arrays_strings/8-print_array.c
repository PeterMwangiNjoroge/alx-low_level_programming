/*
* File: 8-print_array.c
* Author: Peter Njoroge
*/

#include <stdio.h>
#include "main.h"

/**
*  print_array - prints n elements of an array of integers,
*  followed by a new line.
*  @a: int arg
*  @n: int arg
*  Return: nothing
*/

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter == 0)
		{
			printf("%d", a[counter]);
		}
		else
		{
			printf(", %d", a[counter]);
		}
	}
	printf("\n");
}
