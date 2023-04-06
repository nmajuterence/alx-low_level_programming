#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: pointer 1
 * @needle: pointer 2
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0 ; *haystack != '\0' ; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			x++;
		}
		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
