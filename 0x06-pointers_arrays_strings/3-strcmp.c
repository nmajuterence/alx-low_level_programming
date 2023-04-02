#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string number one
 * @s2: string number two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0 ; s1[j] != '\0' || s2[j] != '\0' ; j++)
	{
		if (s1[j] != s2[j])
		{
			if (s1[j] < s2[j])
				return (s1[j] - s2[j]);
			else if (s1[j] > s2[j])
				return (s1[j] - s2[j]);
		}
		else
			return (0);
	}
	return (0);
}
