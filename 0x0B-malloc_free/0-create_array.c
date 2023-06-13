#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and initializes
 * it w a specific char
 * @size: size of the array
 * @c: character that initializes the array
 * Return: Pointer to the array, NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	/*Allocating char c to all array slots*/
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
