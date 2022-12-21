#include "main.h"

/**
  * _strlen - it returns the length of a string
  *
  * @s: its a pointer to a string
  *
  * Return: lengthn of a string
  */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);

}
