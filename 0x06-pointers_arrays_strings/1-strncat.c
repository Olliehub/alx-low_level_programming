#include "main.h"

/**
  * strncat - concatenates two string
  * @dest: destination string
  * @src: source string
  * @n: number of bytes of strings to concatenate
  *
  * Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
