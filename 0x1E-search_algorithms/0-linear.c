#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an
 * array of integers using the Linear search algorithm.
 *
 * @array: An array is a pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (array[i] != value)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
