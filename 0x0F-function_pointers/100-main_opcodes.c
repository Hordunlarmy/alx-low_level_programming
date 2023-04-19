#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, count;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *(array + count));
		if (count == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
