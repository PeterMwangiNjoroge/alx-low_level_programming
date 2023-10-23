/*
* File: 0-print_listint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: pointer to node
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t l_list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l_list++;
		h = h->next;
	}

	return (l_list);
}
