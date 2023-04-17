#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Entry point
 * @d: pointer of type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
