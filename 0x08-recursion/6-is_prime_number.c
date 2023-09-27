/*
* File: 6-is_prime_number.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  check_prime - checks if a number is prime
*  @n: int arg
*  @i: int arg
*  Return: int
*/

int check_prime(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (check_prime(n + 1, i));
}

/**
*  is_prime_number - checks if a number is prime
*  @n: int arg
*  Return: int
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
