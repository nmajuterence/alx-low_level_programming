#include "main.h"

/**
 * print_rev - function that prints a string
 * @s: function parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int y = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		y++;
	for (i = y ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
