/*
* File: 6-pop_listint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* linked list, and returns the head node’s data (n).
* @head: pointer to node
* Return: head node’s data (n), 0 if empty.
*/

int pop_listint(listint_t **head)
{
	listint_t *l_list;
	int num = 0;

	if (!head || !*head)
	{
		return (num);
	}

	num = (*head)->n;
	l_list = (*head)->next;
	free(*head);
	*head = l_list;

	return (num);
}
