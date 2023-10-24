/*
* File: 1-listint_len.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: pointer to node
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);

}
