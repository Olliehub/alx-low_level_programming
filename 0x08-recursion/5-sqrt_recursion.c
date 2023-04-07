#include "main.h"

/**
 * _sqrt - description
 * @x: number
 * @y: number
 * Return: int
 */
int _sqrt(int x, int y)
{
	int sum;

	sum = x - y;
	if (sum < 0)
		return (-(y / 2) - 1);
	if (sum == 0)
		return (1);
	else
		return (1 + _sqrt(sum, y + 2));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: integer to find square root of
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));

}
