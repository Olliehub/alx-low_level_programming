#include "main.h"
#include <stdlib.h>

/**
 * array_range - This creates an arrqy of integers from min to max.
 * @min: First value of the array
 * @max: Last value of the array
 * Return: if function fails -  NULL, pointer to new array.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
