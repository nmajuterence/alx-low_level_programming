#include "main.h"

/**
 * _abs - checks the absolute value
 *
 * @i: the parameter to be checked
 *
 * Return: always i
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else if (i >= 0)
	{
		i = i;
	}
	return (i);
}
