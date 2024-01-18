#include "main.h"

/**
 * create_array - this function creates an array of chars
 * @size: array size
 * @c: char
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (x = 0 ; x < size ; x++)
	{
		s[x] = c;
	}
	return (s);
}
