#include "main.h"


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
