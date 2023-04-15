#include "main.h"

/**
 * _realloc - this function reallocates a memory block using malloc and free
 * @ptr: pointer to memory block
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to new memory size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	for (j = 0 ; j < old_size && j < new_size ; j++)
	{
		newptr[j] = ((char *) ptr)[j];
	}
	free(ptr);
	return (newptr);
}
