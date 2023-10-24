/*
* File: 100-reverse_listint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: pointer to node
* Return: int 1 if it succeeded, -1 if it failed
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l_list = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = l_list;
		l_list = *head;
		*head = next;
	}
	*head = l_list;

	return (*head);
}
