#include "main.h"

/**
 * _strchr - this function locates a character in a string
 * @c: main character
 * @s: pointer to character
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (k = 0 ; s[k] >= '\0' ; k++)
	{
		if (s[k] == c)
		{
			return (&s[k]);
		}
	}
	return (0);
}
