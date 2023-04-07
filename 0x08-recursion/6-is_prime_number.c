#include "main.h"

/**
 * is_prime - checks to see if a number is prime
 * @x: number int
 * @y: number int
 * Return: int
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));

}

