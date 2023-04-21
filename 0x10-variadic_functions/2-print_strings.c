#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: string
 * @n: num,ber of arguments
 * Return: strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		/*if (separator == NULL)printf("(nil)");*/
		printf("%s", va_arg(ap, char *));

		if (separator == NULL)
			printf("(nil)");
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
