#include "main.h"

/**
 * main - this program prints all arguments it receives
 * @argc: counter
 * @argv: array
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
