#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	char output = write(1, &c, 1);

	return (output);
}
