#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: array being ilterated
 * @size: size of array
 * @cmp: function pointer
 * Return: searches for an integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if ((*cmp)(*(array + count)) != 0)
			return (count);
	}
	return (-1);
}
