/*
* File: 5-sign.c
* Author: Peter Njoroge
*/

#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: argument to be checked
* Return:   int, abs value of supplied arg.
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
