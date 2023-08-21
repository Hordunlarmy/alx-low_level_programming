#include "main.h"


/**
 * _strpbrk - Entry point
 * @s: pointer varaible destination
 * @accept: pointer variable source
 * Return: searches a string for any of a set of bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *ps = s;
	char *pa = accept;

	for (i = 0; *(ps + i) != '\0'; i++)

	for (j = 0; *(pa + j) != '\0'; j++)

		if (*(pa + j) == *(ps + i))
			return (s + i);

	return (0);
}
