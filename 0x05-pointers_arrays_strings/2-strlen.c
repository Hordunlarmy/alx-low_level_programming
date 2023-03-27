#include "main.h"


/**
 * _strlen - Entry point
 * @s: string checked
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	/* char *s = "My first strlen!"; */
	int i, lent;

	lent = 0;
	for (i = 0; i <= s[lent]; i++)
		lent++;
	return (lent);
}
