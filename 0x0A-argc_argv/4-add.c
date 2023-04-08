#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array argument
 * Return: addition of positive numbers.
 */
int main(int argc, char *argv[])
{
	int count;
	int sum;
	int letter;

	for (count = 1; count < argc; count++)
	{
		for (letter = 0; argv[count][letter]; letter++)
		{
			if (argv[count][letter] < '0' || argv[count][letter] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[count]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
