#include "main.h"


/**
 * print_last_digit - Entry point
 * @n: number to be computed
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
