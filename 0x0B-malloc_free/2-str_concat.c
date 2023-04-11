#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: string destination
 * @s2: source
 * Return: concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *merge;
	int counts1, counts2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (counts1 = 0; *(s1 + counts1) != '\0'; counts1++)
		;
	for (counts2 = 0; *(s2 + counts2) != '\0'; counts2++)
		;
	merge = malloc((sizeof(char) * counts1) + (sizeof(char) * (counts2 + 1)));

	if (merge == NULL)
		return (NULL);

	for (i = 0; i < counts1; i++)
		*(merge + i) = *(s1 + i);

	for (j = 0; j < counts2; j++)
		*(merge + i + j) = *(s2 + j);

	return (merge);
}
