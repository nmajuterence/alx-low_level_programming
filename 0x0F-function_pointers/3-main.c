#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operators
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: results of the operations
*/
int main(int argc, char *argv[])
{
	char *op;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(99);
	}
	else
	printf("%d\n", get_op_func(op) (num1, num2));

	return (0);

}

