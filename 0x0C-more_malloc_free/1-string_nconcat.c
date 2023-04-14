#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Entry point
 * @s1: string destination
 * @s2: source
 * @n: byte of s2
 * Return: concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *merge;
	unsigned int counts1, counts2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (counts1 = 0; *(s1 + counts1) != '\0'; counts1++)
		;
	for (counts2 = 0; *(s2 + counts2) != '\0'; counts2++)
		;

	if (n > counts2)
		n = counts2;

	merge = malloc((sizeof(char) * (counts1 + n + 1)));

	if (merge == NULL)
		return (NULL);

	for (i = 0; i < counts1; i++)
		*(merge + i) = *(s1 + i);

	for (j = 0; j < n; j++)
		*(merge + j + counts1) = *(s2 + j);

	*(merge + j + counts1) = '\0';

	return (merge);
}
