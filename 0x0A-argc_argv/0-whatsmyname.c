#include <stdio.h>


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
