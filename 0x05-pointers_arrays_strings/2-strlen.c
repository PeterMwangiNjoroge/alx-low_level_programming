/*
* File: 2-strlen.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strlen - returns the length of a string
*  @s: char arg
*  Return: int, length of string s
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
