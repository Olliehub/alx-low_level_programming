#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This returns a pointer to a newly allcated space in memory
 * @str: string to be newly allocated in memory
 * Return: a pointer to the new array if string is NULL or empty
 */
char *_strdup(char *str)
{
	char *b;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	b = malloc(sizeof(char) * (len + 1));

	if (b == NULL)
		return (NULL);

	while ((b[i] = str[i]) != '\0')
		i++;

	return (b);
}
