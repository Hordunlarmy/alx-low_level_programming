#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char lowCase;

		for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
		{
			_putchar(lowCase);
		}
		_putchar('\n');
	}
}
