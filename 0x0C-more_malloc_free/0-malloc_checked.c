#include "main.h"

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: function parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
