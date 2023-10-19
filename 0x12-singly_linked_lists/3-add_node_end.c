/*
* File: 3-add_node_end.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* add_node_end -  adds a new node at the end of a list_t list.
* @head: pointer to node
* @str: const char
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;

	list_t *new_node, *temp_node = head;

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
	new_node->next = (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;

	return (new_node);
}
