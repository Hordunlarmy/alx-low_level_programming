#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Entry point
 * @s : pointer to string
 * Return: a string in reverse.
 */
void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')

		return;

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
