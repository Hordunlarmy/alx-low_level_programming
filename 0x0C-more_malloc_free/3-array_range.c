#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Entry point
 * @min: minimum value
 * @max: maximum value
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *intArr, count;

	int range = max - min + 1;

	if (min > max)
		return (NULL);

	intArr = malloc(sizeof(int) * range);

	if (intArr == NULL)
		return (NULL);

	for (count = 0; count < range; count++)
		*(intArr + count) = min + count;

	return (intArr);
}
