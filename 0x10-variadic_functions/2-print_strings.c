#include "variadic_functions.h"

/**
 * print_strings - functiins that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(NULL)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
