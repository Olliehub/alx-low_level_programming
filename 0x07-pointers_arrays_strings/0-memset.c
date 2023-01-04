#include "main.h"

/**
  * _memset - fills a memory with a constant byte
  *
  * @n: buffer size
  * @s: bytes of the memory area pointed
  * @b: the constant byte
  *
  * Return: pointer to memory area s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
