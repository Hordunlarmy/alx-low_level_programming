#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Entry point
 * @s: string checked
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	/* char *s = "My first strlen!"; */
	int lent;

	lent = 0;
	while (s[lent])
		lent++;
	return (lent);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *f = dest;

	while (*src)
		*dest++ = *src++;
	return (f);
}


/**
 * *new_dog - Entry point
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL || !(age >= 0) || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (p->name == NULL || p->owner == NULL)
	{
		return (NULL);
		free(p->name);
		free(p);
	}

	p->name = _strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);

	return (p);
}
