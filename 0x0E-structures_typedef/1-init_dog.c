/*
* File: 1-init_dog.c
* Author: Peter Njoroge
*/

#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to dog structure
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
