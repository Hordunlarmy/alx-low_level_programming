#include "main.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return(p);
}
