#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Entry point
 * @format: argument list
 * Return: prints anything.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int count = 0;
	char *string, *separator;

	va_start(ap, format);

	separator = "";

	while (format && *(format + count))
	{
		switch (*(format + count))
		{
			case  'c':
				printf("%s%c", separator, va_arg(ap, int));
					break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
					break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				count++;
				continue;
		}
		separator = ", ";
		count++;
	}
	printf("\n");
	va_end(ap);
}
