#include <stdio.h>


/**
 * print_to_98 - Entry point
 * @n: number being computed
 * Return: all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98;)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		for (; n < 98;)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	return (0);
}
