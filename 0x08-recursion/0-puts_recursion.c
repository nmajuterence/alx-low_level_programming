#include "main.h"

/**
 * _puts_recursion - this fuction prints a string
 * @s: fuction parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
