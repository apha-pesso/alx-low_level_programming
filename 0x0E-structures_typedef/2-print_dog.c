#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that prints struct dog
 * @d: the dog to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((d->owner == NULL) || (d->age == 0))
		printf("(nil)\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
