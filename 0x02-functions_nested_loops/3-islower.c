#include "main.h"


/**
 * _islower - checks for lowercase characters
 *
 * Return: parameter or member 'c'
 * _islower
 */
int _islower(int c)
{
	c = _putchar('a');

	if (c <= (_putchar('z')))
	{
		return (1);
	}
	else
		return (0);
}
