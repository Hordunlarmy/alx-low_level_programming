#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * @str: string being used
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */
char *_strdup(char *str)
{
	char *p;
	int count, i;

	if (str == NULL)
		return (NULL);

	for (count = 0; *(str + count) != '\0'; count++)
		;
	p = malloc(sizeof(char) * (count + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		*(p + i) = *(str + i);
	*(p + i) = '\0';

	return (p);
	free(p);
}
