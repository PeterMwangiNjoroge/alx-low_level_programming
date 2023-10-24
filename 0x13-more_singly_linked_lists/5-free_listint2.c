/*
* File: 5-free_listint2.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: pointer to node
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *l_list;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		l_list = (*head)->next;
		free(*head);
		*head = l_list;
	}
	*head = NULL;
}
