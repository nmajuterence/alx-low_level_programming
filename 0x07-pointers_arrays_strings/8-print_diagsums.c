#include "main.h"

/**
 * print_diagsums - this function prints  the sum of the two diagonals of a square matrix of integers
 * @a: first input
 * @size: second input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int add1;
	int add2;
	int i;

	for (i = 0 ; i < size ; i++)
	{
		add1 = add1 + a[i * size + i];
	}
	for (i = size - 1 ; i >= 0 ; i--)
	{
		add2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
