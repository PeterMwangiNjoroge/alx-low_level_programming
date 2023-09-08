/*
* File: 6-print_numberz.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	putchar('\n');
	return (0);
}
