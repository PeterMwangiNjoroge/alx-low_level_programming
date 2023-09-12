/*
* File: 11-print_to_98.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: number to start count
* Return: void
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
