#include "main.h"

/**
 * puts2 - check the code
 * @str: function parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
