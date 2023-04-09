#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int _strlen_recursion(char *s)
{
	char i;

	for (i = 0 ; s[i] != '\0' ; i++)
		_putchar(s[i]);
		
	_putchar('\n');
	return (s);
}
