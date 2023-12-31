/*
* File: 0-print_list.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* print_list -  prints all the elements of a list_t list
* @h: pointer to node
* Return: size_t
*/

size_t print_list(const list_t *h)
{
	size_t l_list = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		l_list++;
	}

	return (l_list);
}
