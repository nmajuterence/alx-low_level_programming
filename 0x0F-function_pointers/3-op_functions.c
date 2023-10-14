#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*
 * op_add - this function adds two numbers.
 * @a: first number
 * @b: second number
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/*
 * op_sub - this function subtracts two numbers.
 * @a: first number
 * @b: second number
 * Return: the diffence of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/*
 * op_mul - this function multiplies two numbers.
 * @a: first number
 * @b: second number
 * Return: the product of two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/*
 * op_div - this function divides two numbers
 * @a: first number
 * @b: second number
 * Return: the devident two numbers
*/
int op_div(int a, int b)
{
	return (a / b);
}
/*
 * op_mod - this function calculates the modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
