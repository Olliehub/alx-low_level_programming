#include "search_algos.h"

/**
* advanced_binary - This searches for a value in an array of
* integers using binary search algorithm
* @array: A pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: is the value to search for
* Return: If value is not present in array or if array
* is NULL, your function must return -1
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rec(array, 0, (int)size - 1, value));
}

/**
* binary_search_rec - this is a recursion for binary search algorithm
* @array: is a pointer to the first element of the array to search in
* @left: the less index of the array
* @right: the highest index of the array
* @value: is the value to search for
* Return: If value is not present in array return -1
*/

int binary_search_rec(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;

	print_array(array, left, right);
	if (array[mid] == value)
	{
		if (array[mid - 1] == value && array[mid - 1] != 0)
		{
			return (binary_search_rec(array, left, mid - 1, value));
		}
		return (mid);
	}
	if (left >= right)
		return (-1);
	if (array[mid] < value)
		return (binary_search_rec(array, mid + 1, right, value));
	return (binary_search_rec(array, left, mid - 1, value));
}

/**
* print_array - print array
* @array: A  pointer to the first element of the array to search in
* @left: the less index of the array
* @right: the highest index of the array
*/

void print_array(int *array, int left, int right)
{
	int i = left;

	printf("Searching in array: ");
	for (; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
