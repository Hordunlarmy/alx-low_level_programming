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

	for (count = 0; *(str + count) != '\0'; count++)
		;
	p = malloc(sizeof(char) * (count++));

	for (i = 0; i < count; i++)
		*(p + i) = *(str + i);
	*(p + i) = '\0';

	if (str == NULL || p == NULL)
		return (NULL);

	return (p);
}
