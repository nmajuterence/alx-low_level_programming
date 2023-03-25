#include "main.h"
/**
 * _islower - checks for lowercase letters in the alphabet
 *
 * @c: the parameter to be printed
 *
 * Return: 1 for a lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
