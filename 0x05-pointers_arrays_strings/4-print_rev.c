#include "main.h"


/**
 *  print_rev - Entry point
 * @s: variable name
 * Return: a string, a string, in reverse, followed by a new line.
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
