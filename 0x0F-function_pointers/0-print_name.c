#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: input name
 * @f: parameter function
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
