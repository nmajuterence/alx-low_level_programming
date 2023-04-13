#include "main.h"

/**
 * main - this program prints the sum of positive numbers
 * @argc: counter
 * @argv: arrray
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int j;
	char *c;
	unsigned int x, sum = 0;

	if (argc > 1)
	{
		for (j = 1 ; j < argc ; j++)
		{
			c = argv[j];

			for (x = 0 ; x < strlen(c) ; x++)
			{
				if (c[x] < 48 || c[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
