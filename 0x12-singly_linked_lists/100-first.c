/*
* File: 100-first.c
* Author: Peter Njoroge
*/

#include <stdio.h>

void func(void) __attribute__ ((constructor));

/**
 * func - prints "You're beat! and yet, you must allow,\nI bore my house
 * upon my back!\n" before the main function is executed.
 * Return: nothing
 */

void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
