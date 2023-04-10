#include "main.h"


/**
 * _memcpy - Entry point
 * @dest: pointer to memory destination
 * @src: pointer to memory source
 * @n: size variable
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *memorySrc = src;
	char *memoryDest = dest;

	for (i = 0; i < n; i++)
		*(memoryDest + i) = *(memorySrc + i);

	return (dest);
}
