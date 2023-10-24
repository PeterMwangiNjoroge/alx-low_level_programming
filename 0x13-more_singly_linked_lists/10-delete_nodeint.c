/*
* File: 10-delete_nodeint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at
* index of a listint_t linked list.
* @head: pointer to node
* @index: unsigned int index
* Return: int 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l_list = *head, *new = NULL;

	unsigned int counter = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(l_list);
		return (1);
	}

	while (counter < index - 1)
	{
		if (l_list == NULL || (l_list->next) == NULL)
		{
			return (-1);
		}
		l_list = l_list->next;
		counter++;
	}

	new = l_list->next;
	l_list->next = new->next;
	free(new);

	return (1);
}
