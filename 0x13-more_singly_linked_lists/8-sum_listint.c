/*
* File: 8-sum_listint.c
* Author: Peter Njoroge
*/

#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer to node
* Return: int sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	size_t l_list = 0;

	while (head)
	{
		sum += head->n;
		l_list++;
		head = head->next;
	}

	return (sum);
}
