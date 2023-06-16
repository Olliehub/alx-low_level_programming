#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of the array to be created
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	char *n;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	n = memory;

	for (i = 0; i < (nmemb * size); i++)
		n[i] = '\0';

	return (memory);
}
