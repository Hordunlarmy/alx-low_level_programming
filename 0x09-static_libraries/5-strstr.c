#include "main.h"


/**
 * _strstr - Entry point
 * @haystack: pointer destination
 * @needle: pointer source
 * Return: locates a substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	char *ph = haystack;
	char *pn = needle;

	for (i = 0; *(ph + i) != '\0'; i++)

	for (j = 0; *(pn + j) != '\0'; j++)

		if (*(pn + j) == *(ph + i + 1) || *(pn + j) == '\0')
			return (needle + i);

	return (0);
}
