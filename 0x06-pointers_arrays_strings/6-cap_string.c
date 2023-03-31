#include "main.h"


/**
 * *cap_string - Entry point
 * @str: pointer variable
 * Return: capitalizes all words of a string.
 */
char *cap_string(char *str)
{
	char *p = str;
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')

		if (i == 0 || *(p + (i - 1)) == ' ' ||
		*(p + (i - 1)) == '\t' || *(p + (i - 1)) == '\n' ||
		*(p + (i - 1)) == ',' || *(p + (i - 1)) == ';' ||
		*(p + (i - 1)) == '.' || *(p + (i - 1)) == '!' ||
		*(p + (i - 1)) == '?' || *(p + (i - 1)) == '"' ||
		*(p + (i - 1)) == '(' || *(p + (i - 1)) == ')' ||
		*(p + (i - 1)) == '{' || *(p + (i - 1)) == '}')
		{
			*(p + i) -= 32;
		}
	}
	return (str);
}
