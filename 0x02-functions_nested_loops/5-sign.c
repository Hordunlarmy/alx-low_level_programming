#include "main.h"


/**
 * print_sign - Entry point
 * @n: character to be checked
 * Return: 1 if greater than 0, return 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-'};
		return (-1);
}
