#include "main.h"

/**
 * _strncat - this function concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the nth characters in the string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dl = 0;
	int sl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dl++;
	for (i = 0 ; src[i] != '\0' ; i++)
		sl++;
	for (i = 0 ; i < n ; i++)
		dest[dl + i] = src[i];
	return (dest);
}
