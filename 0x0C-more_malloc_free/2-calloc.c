#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Entry point
 * @nmemb: number of array element
 * @size: array size
 * Return: allocated memory for an array, using malloc.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arraymem;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arraymem = malloc(size * nmemb);

	if (arraymem == NULL)
		return (NULL);

	for (count = 0; count < (nmemb * size); count++)
		*((char *)(arraymem) + count) = 0;

	return (arraymem);
}
