/*
* File: 4-free_list.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to node
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *l_list;

	while (head)
	{
		l_list = head->next;
		free(head->str);
		free(head);
		head = l_list;
	}
}
