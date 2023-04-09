#include "main.h"

/**
 * factorial - this function returns the factorial of a given number
 *
 * @n: function parameter
 *
 * Return: the value of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
