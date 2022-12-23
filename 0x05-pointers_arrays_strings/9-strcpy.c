#include "main.h"

/**
  *_strcpy - copies the string
  *
  * @dest: destination string
  * @src: source of string
  *
  * Return: return a pointer
  */

char *_strcpy(char *dest, char *src)
{
	char *a;
	char *b;

	a = dest;
	b = src;

	while (*b != '\0')
	{
		*a = *b;
		a++;
		b++;
	}
	*a = '\0';
	return (dest);
}
