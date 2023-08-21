#include "main.h"


/**
 * _strcat - Entry point
 * @dest: pointer variable 1
 * @src: pointer variable 2
 * Return: two strings concatenated)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
