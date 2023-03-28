#include "main.h"


/**
 *  _puts - Entry point
 * @str: variable name
 * Return: a string, followed by a new line, to stdout.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
