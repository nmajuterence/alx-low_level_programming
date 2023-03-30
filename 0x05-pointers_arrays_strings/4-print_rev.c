#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter of the function
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		y++;
		for (i = y; i >= 0; i--)
			_putchar(s[i]);
	}
	_putchar('\n');
}
