#include "main.h"
#include <stdio.h>

/**
 * main - This prints the program name
 * @argc: The number of arguments
 * @argv: Arrays of arguments
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
