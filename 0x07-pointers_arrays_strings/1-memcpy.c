#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: destination
 * @src: source
 * @n: bytes of the memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (x = 0 ; x < y ; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
