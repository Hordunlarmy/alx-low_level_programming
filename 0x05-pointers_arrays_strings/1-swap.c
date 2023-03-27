#include "main.h"


/**
 * swap_int - Entry point
 * @a: first integer
 * @b: second integer
 * Return: swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
