/*
* File: 100-is_palindrome.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
*  _strlen_recursion - returns the length of a string.
*  @s: char arg
*  Return: int
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}

/**
*  check_palindrome - checks if a string is palindrome.
*  @s: char arg
*  @i: int arg
*  @j: int arg
*  Return: int
*/

int check_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
}

/**
*  is_palindrome - checks if a string is palindrome.
*  @s: char arg
*  Return: int
*/

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
