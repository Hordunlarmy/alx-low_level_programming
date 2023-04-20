#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 * @separator: string
 * @n: number of argument
 * Return: numbers, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(ap, int));

		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
}
