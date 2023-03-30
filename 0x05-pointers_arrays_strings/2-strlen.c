#include "main.h"

/**
 * _strlen - this function counts the length of a string
 * @s: string to be counted
 * Return: string lenth
 */
int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	return (y);
}
