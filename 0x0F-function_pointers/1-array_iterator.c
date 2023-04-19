#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator  - Entry point
 * @array: array variable
 * @size: size of array
 * @action: pointer to function used
 * Return: executes a function given
 * as a parameter on each element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
		(*action)(*(array + count));
}
