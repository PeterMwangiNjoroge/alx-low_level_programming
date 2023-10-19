/*
* File: 2-add_node.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* add_node -  adds a new node at the beginning of a list_t list.
* @head: pointer to node
* @str: const char
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;

	list_t *new_node;

	while (str[length] != '\0')
	{
		length++;
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
