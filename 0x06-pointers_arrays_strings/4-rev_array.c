#include "main.h"


/**
 * reverse_array - Entry point
 * @a: pointer to array
 * @n: number of elements
 * Return: the content of an array of integers in reverse
 */
void reverse_array(int *a, int n)
{
	int *p = a;
	int i, j;

	for (i = 0; i < n / 2 ; i++)
	{
		j = *(p + i);
		*(p + i) = *(p + (n - 1 - i));
		*(p + (n - 1 - i)) = j;
	}
}
