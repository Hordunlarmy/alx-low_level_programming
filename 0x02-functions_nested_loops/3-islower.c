#include "main.h"


/**
 * _islower - checks for lowercase characters
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	c = _putchar('a');

	if (c <= (_putchar('z')) && c >= (_putchar('a')))
	{
		return (1);
	}
	else
		return (0);
}
