#include "main.h"


/**
 * _strlen_recursion - Entry point
 * @s: Pointer variable
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int strLen;
	int i = 0;

	if (*(s + i) == '\0')

		return (0);

	strLen = 1 + _strlen_recursion(s + 1);

	return (strLen);
}
