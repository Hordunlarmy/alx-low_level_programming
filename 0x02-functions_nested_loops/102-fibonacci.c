#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (fib = 0; fib < 50; fib++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (fib == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
