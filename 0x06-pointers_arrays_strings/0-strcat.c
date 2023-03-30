#include "main.h"


/**
 * _strcat - Entry point
 * @dest: pointer variable 1
 * @src: pointer variable 2
 * Return: two strings concatenated)
 */
char *_strcat(char *dest, char *src)
{

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest);
}
