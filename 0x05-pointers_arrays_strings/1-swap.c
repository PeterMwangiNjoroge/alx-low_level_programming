/*
* File: 1-swap.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  swap_int - swaps the values of two integers
*  @a: int arg
*  @b: int arg
*  Return: nothing
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
