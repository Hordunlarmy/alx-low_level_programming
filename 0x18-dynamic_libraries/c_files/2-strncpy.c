#include "main.h"


/**
 * _strncpy - Entry point
 * @dest: pointer var 1
 * @src: pointer var 2
 * @n: width indicator
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	char *p = dest;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(p + i) = *(src + i);

	for (; i < n; i++)
		*(p + i) = '\0';

	return (dest);
}
