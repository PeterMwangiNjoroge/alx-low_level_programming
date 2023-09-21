/*
* File: 3-strcmp.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strcmp -  this function compares two strings
*  @s1: char arg
*  @s2: char arg
*  Return: int
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
