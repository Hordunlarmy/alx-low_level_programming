#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argement passed
 * Return:  multiplication two numbers.
 */
int main(int argc, char *argv[])
{
	int count;
	int sum = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			sum *= atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
