/*
* File: 1-list_len.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* list_len -  returns the number of elements in a linked list_t list.
* @h: pointer to node
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t l_list = 0;

	while (h)
	{
		l_list++;
		h = h->next;
	}

	return (l_list);
}
