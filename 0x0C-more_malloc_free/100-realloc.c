#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: if new_size > old_size, added memory should not be initialized,
 * if new_size == old_size, return ptr or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;

	for (i = 0, i < max; i++;)
		p[i] = oldptr[i];

	free(ptr);
	return (p);
}
