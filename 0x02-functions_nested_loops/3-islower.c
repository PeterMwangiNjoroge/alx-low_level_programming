/*
* File: 3-islower.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* _islower - checks if lower case or not.
* @c: argument to be checked
* Return: 1 if lower, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
