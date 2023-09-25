/*
* File: 8-print_diagsums.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdio.h>

/**
*  print_diagsums - prints the sum of the two diagonals of
*  a square matrix of integers.
*  @a: int arg
*  @size: int arg
*  Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i, sum_r = 0, sum_l = 0;

	for (i = 0; i < size; i++)
	{
		sum_r += a[(size * i) + i];
		sum_l += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_r, sum_l);
}
