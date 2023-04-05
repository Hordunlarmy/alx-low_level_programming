#include "main.h"


/**
 * factorial - Entry point
 * @n: number to be factorialized
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	fact = n * factorial(n - 1);
	return (fact);
}
