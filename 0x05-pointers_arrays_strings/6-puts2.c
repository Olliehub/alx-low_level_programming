#include "main.h"

/**
  * puts2 - prints every other character of a string, with the first character
  *
  * @str: pointer of a parameter
  */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
