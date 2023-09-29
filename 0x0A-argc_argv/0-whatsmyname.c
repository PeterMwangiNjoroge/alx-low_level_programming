/*
* File: 0-whatsmyname.c
* Author: Peter Njoroge
*/

#include <stdio.h>

/**
*  main - prints its name, followed by a new line.
*  @argc: int arg
*  @argv: char arg
*  Return: int
*/

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
