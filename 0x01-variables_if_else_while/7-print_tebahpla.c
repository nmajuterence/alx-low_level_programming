#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
