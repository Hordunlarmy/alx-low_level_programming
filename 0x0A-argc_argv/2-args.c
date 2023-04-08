#include <stdio.h>


/**
 * main - Entry point
 * @argc: arg count
 * @argv: array that stores arguments
 * Return: all arguments it receives.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
