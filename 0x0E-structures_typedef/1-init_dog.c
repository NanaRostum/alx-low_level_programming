#include <stdio.h>
#include "dog.h"

/**
 * *init_dog - initializes a variable of type structure dog
 * @d: pointer to struct dog to initilaize
 * @name: name to initiate
 * @age: age to initiate
 * @owner: owner to initiate
 * Return: void
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
