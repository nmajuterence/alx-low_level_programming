#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of number 1 and 2.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: the difference of two numbers.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: product of two numbers.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: dividend of two numbers.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus of two numbers.
 * @a: number 1
 * @b: number 2
 *
 * Return: modulus of two numbers.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
