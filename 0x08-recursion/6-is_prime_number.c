#include "main.h"

int prime_check(int n, int j);
/**
 * is_prime_number - this function checks if the integer is a prime number
 * @n: function parameter
 * Return: 1 if n is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, n - 1));
}

/**
 * prime_check - check prime numbers
 * @j: iterate
 * @n: input number
 * Return: 1 or 0
 */

int prime_check(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (prime_check(n, j - 1));
}
