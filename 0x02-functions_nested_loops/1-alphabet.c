#include "main.h"

/* A function that prints the alphabet, in lowercase, followed by a new line.*/
void print_alphabet(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		_putchar(lowCase);
		_putchar('\n');
	}
}
