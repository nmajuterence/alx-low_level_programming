#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: function parameter
 * Return: always 0
 */
void puts_half(char *str)
{
	int i;
	int l = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		l++;
	if (l % 2 == 0)
	{
		for (i = l / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (l % 2 != 0)
	{
		for (i = (l - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
