/*
* File: 5-sqrt_recursion.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  get_sq - recurses to find the natural square root of a number
*  @n: int arg
*  @i: int arg
*  Return: int
*/

int get_sq(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (get_sq(n, i + 1));
}

/**
*  _sqrt_recursion - returns the natural square root of a number
*  @n: int arg
*  Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sq(n, 0));
}
