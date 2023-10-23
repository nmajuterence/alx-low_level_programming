#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - perform a simple calculator function.
 * @argc: argument count.
 * @argv: argumment vector.
 * 
 * Return: results of the calculator function.
*/
int main(int argc, char *argv[])
{
    char *op; /* operator */
    int num1, num2; /* inputs */

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    op = (argv[2]);
    num2 = atoi(argv[3]);

    /* operator not in list*/

    if (get_op_func(op) == NULL || op[1] != '\n')
    {
            printf("Error\n");
            exit(99);
    }

    /* when divides or perform modulus by 0*/

    if ((*op == '/') || (*op == '%' && num2 == 0))
    {
            printf("Error\n");
            exit(100);
    }

    /* prints the results */

    printf("%d\n", get_op_func(op)(num1, num2));
    
    return (0);
}