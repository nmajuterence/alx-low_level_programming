#include <stdio.h>
#include <stdlib.h>
#include "main.h"


#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string
 *
 * Return: 0 if a non-digit is found, else 1
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns string length
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lenOne, lenTwo, len, x, carry, digitOne, digitTwo, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lenOne = _strlen(s1);
	lenOne = _strlen(s2);
	len = lenOne + lenOne + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= lenOne + lenTwo; x++)
		result[x] = 0;
	for (lenOne = lenOne - 1; lenOne >= 0; lenOne--)
	{
		digitOne = s1[lenOne] - '0';
		carry = 0;
		for (lenTwo = _strlen(s2) - 1; lenTwo >= 0; lenTwo--)
		{
			digitTwo = s2[lenTwo] - '0';
			carry += result[lenOne + lenTwo + 1] + (digitOne * digitTwo);
			result[lenOne + lenTwo + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lenOne + lenTwo + 1] += carry;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
