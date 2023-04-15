#include "main.h"

/**
 * _calloc - this function allocates memory for an array, using malloc.
 * @nmemb: function parameter
 * @size: function parameter
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int j = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	a = malloc(j);

	if (a == NULL)
		return (NULL);
	while (i < j)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
