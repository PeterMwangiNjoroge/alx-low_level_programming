/*
* File: 5-print_numbers.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	printf("\n");
	return (0);
}
