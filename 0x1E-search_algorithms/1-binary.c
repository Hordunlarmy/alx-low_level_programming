#include <stdio.h>

/**
 * binary_search - searches for a value in an array of integers using the
 *                 Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_index = 0;
	size_t right_index = size - 1;
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (left_index <= right_index)
	{
		printf("Searching in array: ");
		for (i = left_index; i <= right_index; ++i)
		{
			printf("%d", array[i]);
			if (i < right_index)
				printf(", ");
		}
		printf("\n");

		mid = left_index + (right_index - left_index) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
			right_index = mid - 1;
		else
			left_index = mid + 1;
	}

	return (-1);
}
