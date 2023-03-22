#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
{
		putchar(letters[i]);
}
		putchar('\n');
	return (0);
}
