#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 *
 * @c: parameter under inverstigation
 *
 * Return: for alphabetic characters return 1 and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
