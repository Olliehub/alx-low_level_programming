#include "main.h"
#include <stdio.h>

/**
 * main - This prints number of argument
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])

{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
