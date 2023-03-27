#include "main.h"

/**
 * _isdigit - this function checks if 0 - 9 are digits
 * @c: character to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
