#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: dog structure
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
