#include "main.h"


/**
 * _memset - Entry point
 * @s: pointer to buffer
 * @b: the bytes to be filled
 * @n: the number of bytes
 * Return: fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s;

	for (i = 0; i < n; i++)
		*(memory + i) = b;

	return (memory);
}
