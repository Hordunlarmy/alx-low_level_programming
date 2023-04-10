#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: array of pointers to arguments
 * Return: the minimum number of coins to make change for an amount of money
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins++;
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
