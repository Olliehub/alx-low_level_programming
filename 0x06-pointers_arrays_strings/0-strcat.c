#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: appends string
  * @src: adds string
  *
  * Return: return a pointer to the resulting string
  */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
