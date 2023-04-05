#include "main.h"

/**
 * _strspn - this function gets the length of a prefix substring
 * @s: pointer 1
 * @accept: pointer 2
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int rtx;

	while (*s)
	{
		for (rtx = 0 ; accept[rtx] ; rtx++)
		{
			if (*s == accept[rtx])
			{
				x++;
				break;
			}
			else if (accept[rtx + 1] == '\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}
