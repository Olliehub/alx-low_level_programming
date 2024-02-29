#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program that multiples two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

}
