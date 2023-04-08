#include <stdio.h>


/**
 * main - Entry point
 * @argc: arugument count
 * @argv: argument array
 * Return: its name, followed by a new line.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s", argv[count]);
	}
	printf("\n");
	return (0);
}
