#include "main.h"

/**
 * array_range - this function creates an array of integers
 * @min: min index
 * @max: max index
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
