#include  "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: size of array
 * @c: character
 * Return:  an array of chars, and initializes it with a specific char.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int count;

	p = malloc(sizeof(c) * size);

		if (size == 0 || p == NULL)
			return (NULL);

	for (count = 0; count < size; count++)
		*(p + count) = c;

	return (p);

}
