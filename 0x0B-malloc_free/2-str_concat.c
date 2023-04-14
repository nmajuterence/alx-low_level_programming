#include "main.h"

/**
 * str_concat - this function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: final string
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, x = 0, y = 0, z = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;
	while (s2[x])
		x++;
	z = j + x;

	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);
	x = 0;

	while (y < z)
	{
		if (y <= j)
			s[y] = s1[y];
		if (y >= j)
		{
			s[y] = s2[x];
			x++;
		}
		y++;
	}
	s[y] = '\0';
	return (s);
}
