#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: pointer of type struct dog
 * Return: a struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!(d->age > 0))
		printf("Name: (nil)\n");
	else
		printf("Name: %f\n", d->age);

	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->owner);

}
