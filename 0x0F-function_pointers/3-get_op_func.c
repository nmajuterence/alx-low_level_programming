#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - select the function to perform operation
 * @s: operator argument
 *
 * Return: result of selected function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	/* initialize i*/
	i = 0;

	/* s doesn't match any operand */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
