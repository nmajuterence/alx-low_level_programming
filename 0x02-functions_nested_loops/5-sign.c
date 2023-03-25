#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1 for positive, 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(' ');
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(' ');
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(' ');
		_putchar('-');
		return (-1);
	}
}
