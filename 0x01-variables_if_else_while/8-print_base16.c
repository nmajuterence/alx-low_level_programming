#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (d = 97; d < 103; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
