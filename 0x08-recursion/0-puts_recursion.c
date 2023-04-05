#include "main.h"


/**
 * _puts_recursion - Entry point
 * @s: s pointer to string
 * Return: a string, followed by a new line.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')

		_putchar('\n');

	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + 1);
	}
}
