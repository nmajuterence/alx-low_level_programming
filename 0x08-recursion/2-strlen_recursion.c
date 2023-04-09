#include "main.h"

/**
 * _strlen_recursion - this function prints the length of a string
 *
 * @s: function parameter
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
