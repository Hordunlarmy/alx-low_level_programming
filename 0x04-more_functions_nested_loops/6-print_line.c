#include "main.h"

/**
 * print_line - Entry point
 * @n: number to be computed:
 * Return: a straight line in the terminal.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
