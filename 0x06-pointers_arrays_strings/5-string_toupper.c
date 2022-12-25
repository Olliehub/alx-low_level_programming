#include "main.h"

/**
  * string_toupper - changes all lowercase letters to uppercase
  *
  * @s: strings to modify
  *
  * Return: resulting string
  */
char *string_toupper(char *)
{
	int x = 0;

	while (*(s + x))
	{
		if ((*(s + x) >= 97) && (*(s + x) <= 122))
			*(s + x) = *(s + x) - 32;
		x++;
	}
	return (s);
}
