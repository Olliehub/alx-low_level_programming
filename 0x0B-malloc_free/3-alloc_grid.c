#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This creates a two dimensional array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (success) or NULL
 */

int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	mat =  malloc(sizeof(int *) * height); /*malloc*/

	if (mat == NULL)
	{
		return (NULL);
	}

	for (i = 0, i < height; i++;)
	{
		mat[i] =  malloc(sizeof(int) * width);
		if (mat[i] == NULL)
		{
			for (i = i - 1; i >= 0; i++)
			{
				free(mat[i]);
			}
			free(mat);
			return (NULL);
		}
	}

	for (i = 0; j < width; j++)
	mat[i][j] = 0;
	return (mat);
}
