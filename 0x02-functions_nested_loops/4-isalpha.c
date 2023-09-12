/*
* File: 3-4-isalpha.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* _isalpha - checks if lower case or not.
* @c: argument to be checked
* Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
