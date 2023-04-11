#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * @width: array row
 * @height: array column
 * Return:  a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array2D, countW, countH;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (countH = 0; countH < height; countH++)
	{
		*(array2D + countH) = malloc(sizeof(int) * width);

		if (*(array2D + countH) == NULL)
		{
			free(array2D);
			for (countW = 0; countW <= countH; countW++)
			{
				free(*(array2D + countW));
			}
			return (NULL);
		}

		for (countW = 0; countW < width; countW++)
			array2D[countH][countW] = 0;
	}

	return (array2D);

}
