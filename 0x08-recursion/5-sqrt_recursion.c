#include "main.h"

int _squareroot(int, int);

/**
 * _sqrt_recursion - this function returns the natural square root of a number
 * @n: function parameter
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}

/**
 * _squareroot - square root
 * @n: input
 * @j: input
 * Return: num
 */

int _squareroot(int n, int j)
{
	int sqr = j * j;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (j);
	return (_squareroot(n, j + 1));
}
