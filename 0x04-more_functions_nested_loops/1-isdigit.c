/*
* File: 1-isdigit.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* _isdigit - checks for digit (0-9).
*@c: input character
* Return: 1 if digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
