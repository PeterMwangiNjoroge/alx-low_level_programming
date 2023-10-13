/*
* File: 2-print_strings.c
* Author: Peter Njoroge
*/

#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char pointer
 * @n: unsigned int
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
