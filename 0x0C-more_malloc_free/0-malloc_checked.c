#include "main.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * *malloc_checked - Entry point
 * @b: memory variable
 * Return:  allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
