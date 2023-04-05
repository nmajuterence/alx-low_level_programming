#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @n: number of bytes
 * @b: main value
 * @s: address of memory
 * Return: array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (k = 0 ; n > 0 ; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
