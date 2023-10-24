#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
* op_add - this function adds two numbers.
* @a: first number.
* @b: second number.
*
* Return: the sum of two numbers.
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub - this function subtracts two numbers.
* @a: first number.
* @b: second number.
*
* Return: the difference of two numbers.
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - this function multiplies two numbers.
* @a: first number.
* @b: second number.
*
* Return: the product of two numbers.
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - this function divides two numbers.
* @a: first number.
* @b: second number.
*
* Return: the dividend of two numbers.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	return (a / b);
}


/**
* op_mod - this function displays the remainder after dividing two numbers.
* @a: first number.
* @b: second number
*
* Return: the modulus.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	return (a % b);
}

