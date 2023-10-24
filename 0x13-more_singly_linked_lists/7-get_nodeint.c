/*
* File: 7-get_nodeint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to node
* @index: unsigned int
* Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l_list = head;
	unsigned int counter = 0;

	while (l_list && counter < index)
	{
		l_list = l_list->next;
		counter++;
	}

	if (counter == 0)
	{
		return (NULL);
	}
	else
	{
		return (l_list);
	}
}
