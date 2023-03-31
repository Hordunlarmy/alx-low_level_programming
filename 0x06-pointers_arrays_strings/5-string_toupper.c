#include "main.h"


char *string_toupper(char *)
{
	ptr = NULL;
	int i;

	for (i = 0; *(ptr + i) != '\0'; i++)

		if (*(ptr + i) >= 'a' && *(ptr +i) <= 'z')
			*(ptr + i) = *(ptr +i) - 32;
	return (ptr);
}
