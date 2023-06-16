#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - This allocates memory using malloc
 * @b: number of bytes in memory to allocate
 * Return: pointer to allocated memory, 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
