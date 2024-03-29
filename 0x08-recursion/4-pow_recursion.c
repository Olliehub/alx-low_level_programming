#include "main.h"

/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of Y
 *
 * @x: parameter to base
 * @y: parameter of pow
 *
 * Return: end prgram
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _pow_recursion(x, y);
		return (x);

	}

	return (0);
}
