#include "main.h"

/**
 * main - this program prints its name
 * @argc: counter
 * @argv: array
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}