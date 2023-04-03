#include "main.h"
#include <unistd.h>



int _putchar(char c)
{
	int output = write(1, &c, 1);

	return (output);
}
