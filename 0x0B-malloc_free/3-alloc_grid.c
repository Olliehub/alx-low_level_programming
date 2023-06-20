#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - This creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (success) or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	mat = (int **) malloc(sizeof(int *) * height);

	if (mat == NULL)
		return (NULL);

	for (i = 0, i < height; i++;)
	{
		mat[i] = (int *) malloc(sizeof(int) * width);
		if (mat[i] == NULL)
		{
			free(mat);
			for (j = 0; j <= i; j++)
				free(mat[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
