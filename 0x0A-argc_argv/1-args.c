#include "main.h"

/**
 * main - this program prints the number of arguments passed to it
 * @argc: counter
 * @argv: array
 * Return: always (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
