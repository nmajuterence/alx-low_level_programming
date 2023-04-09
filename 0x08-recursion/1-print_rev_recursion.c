#include "main.h"

/**
 * _print_rev_recursion - this function prints a string in reverse
 *
 * @s: function parameter
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int x;
	int y = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		y++;

	for (x = y ; x >= 0 ; x--)
		_putchar(s[x]);
}
