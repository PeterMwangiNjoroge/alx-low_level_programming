/*
* File: 2-args.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
*  main - prints its name, followed by a new line.
*  @argc: int arg
*  @argv: char arg
*  Return: int
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
