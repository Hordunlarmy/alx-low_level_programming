#include "main.h"

/**
 * *leet - Entry point
 * @s: pointer variable
 * Return: encodes a string into 1337.
 */
char *leet(char *s)
{
	char *p = s;
	char swap[] = "aAeEoOtTlL";
	char numSwap[] = "4433007711";
	int i, j;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		for (j = 0; *(swap + j) != '\0'; j++)

			if (*(p + i) == *(swap + j))
			{
				*(p + i) = *(numSwap + j);
				break;
			}
	}

	return (s);
}
