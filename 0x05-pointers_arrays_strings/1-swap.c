#include "main.h"

/**
 * swap_int - this function swaps the value of *a to *b
 * @a: variable 1
 * @b: variable 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
