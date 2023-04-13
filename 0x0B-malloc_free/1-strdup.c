#include "main.h"

/**
 * _strdup - this function returns a pointer to a newly allocated space
 * @str: string duplicate
 * Return: duplicate
 */

char *_strdup(char *str)
{
	int x = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);
	while (x < j)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);

}
