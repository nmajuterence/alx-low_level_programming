#include "3-calc.h"
#include <stdlib.h>

/*
 * get_op_func - chooses the fuction to perform
 * @s: operation -> passed as argcument
 * Return: a pointer to the function to the operation passed as argument
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},

	};
}