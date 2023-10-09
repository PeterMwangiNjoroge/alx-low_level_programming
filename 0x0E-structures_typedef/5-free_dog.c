/*
* File: 5-free_dog.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
