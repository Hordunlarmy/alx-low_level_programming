#include "main.h"


/**
 * _strchr - Entry point
 * @s: pointer variable
 * @c: character to be checked
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int i;

	for (i = 0; *(p + i) != '\0'; i++)

		if (*(p + i) == c)
		{
			return (s + i);
		}

	return (0);
}
