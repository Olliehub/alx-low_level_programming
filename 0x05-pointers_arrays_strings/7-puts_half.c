#include "main.h"

/**
  *
  * puts_half - prints half of a string
  *
  * @str: pointer of parameter
  */
void puts_half(char *str)
{
	int length = 0;
	int sublength;

	while (str[length] != '\0')
		length++;
	sublength = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
	while (str[sublength] != '\0')
		_putchar(str[sublength++]);
	_putchar(10);
}
