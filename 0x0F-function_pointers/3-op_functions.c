#include <stdio.h>

/**
 * op-add - this adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this substracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this calculates the module of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
