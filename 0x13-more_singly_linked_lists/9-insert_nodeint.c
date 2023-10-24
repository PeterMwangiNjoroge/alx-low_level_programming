/*
* File: 9-insert_nodeint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* insert_nodeint_at_index -  inserts a new node at a given position.
* @head: pointer to node
* @idx: unsigned int index
* @n: int value to insert
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l_list = *head, *new;
	unsigned int counter;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new ==  NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (counter = 0; l_list && counter < idx; counter++)
	{
		if (counter == idx - 1)
		{
			new->next = l_list->next;
			l_list->next = new;
			return (new);
		}
		else
			l_list = l_list->next;
	}

	return (NULL);

}
