#include "main.h"


/**
 * print_alphabet -  function that prints in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		_putchar(lowCase);
	}
	_putchar('\n');
}
