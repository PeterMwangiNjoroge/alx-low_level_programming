/*
* File: 3-mul.c
* Author: Peter Njoroge
*/

#include <stdio.h>
#include <stdlib.h> /* contains atoi which converts string arg to int*/

/**
*  main - prints its name, followed by a new line.
*  @argc: int arg
*  @argv: char arg
*  Return: int
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int i = atoi(argv[1]);

	int j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
