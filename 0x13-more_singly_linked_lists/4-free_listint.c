/*
* File: 4-free_listint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: pointer to node
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *l_list;

	while (head)
	{
		l_list = head->next;
		free(head);
		head = l_list;
	}
}
