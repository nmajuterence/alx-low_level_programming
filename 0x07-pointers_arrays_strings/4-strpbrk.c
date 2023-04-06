#include "main.h"

/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: main variable
 * @accept: pointer to variable
 * Return: a new line
 */
char *_strpbrk(char *s, char *accept)
{
	int search;

	while (*s)
	{
		for (search = 0 ; accept[search] ; search++)
		{
			if (*s == accept[search])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
