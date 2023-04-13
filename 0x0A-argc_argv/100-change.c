#include "main.h"

/**
 * main - prints the min number of coins to make change for an amt of money
 * @argc: counter
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int _cents, _coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	_cents = atoi(argv[1]);

	while (_cents > 0)
	{
		_coins++;
		if ((_cents - 25) >= 0)
		{
			_cents -= 25;
			continue;
		}
		if ((_cents - 10) >= 0)
		{
			_cents -= 10;
			continue;
		}
		if ((_cents - 5) >= 0)
		{
			_cents -= 5;
			continue;
		}
		if ((_cents - 2) >= 0)
		{
			_cents -= 2;
			continue;
		}
		_cents--;
	}
	printf("%d\n", _coins);
	return (0);
}
