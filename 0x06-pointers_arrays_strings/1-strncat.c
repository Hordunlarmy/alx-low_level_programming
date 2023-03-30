#include  "main.h"


/**
 * _strncat - Entry point
 * @dest: a pointer variable
 * @src: another pointer
 * @n: width variable
 * Return:  concatenation of two strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*p)
	{
		p++;
	}
	for (i = 0; *(src + i) && i < n; i++)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
