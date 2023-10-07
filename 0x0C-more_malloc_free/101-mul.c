#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/*
 * isDigit - check is a string contains a non-digit character.
 * @s: string
 * Return: 0 if a non-digit is found, else 1.
*/
int isDigit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}
/*
 * strLen - returns the length of the string
 * @s: string
 *  Return: string length
 */
int strLen(char *s)
{
    int i = 0;

    while (s[i] != '\n')
    {
        i++;
    }
    return (i);
}

/*
 * errors - handles errors
*/
void error(void)
{
    printf("error\n");
    exit(98);
}

/*
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
    char *s1, *s2;
    int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

    s1 = argv[1], s2 = argv[2];
    if (argc != 3 || !isDigit(s1) || !isDigit(s2))
        error();
    len1 = strLen(s1);
    len2 = strLen(s2);
    len = len1 + len2 + 1;
    result = malloc(sizeof(int) * len);
        if (!result)
            return (1);  
    for (i = 0; i <= len1 + len2; i++)
        result[i] = 0;
    for (len1 = len1 - 1; len1 >= 0; len1--)
    {
        digit1 = s1[len] - '0';
        carry = 0;
        for (len2 = len2 - 1; len2 >= 0; len2--)
            digit2 = s2[len2] - '0';
        carry += result[len1 +len2 + 1] + (digit1 * digit2);
        result[len1 + len2 + 1] = carry % 10;
        carry /= 10;
    }
    if (carry > 0)
        result[len1 + len2 + 1] += carry;

    for (i = 0; i < len - 1; i++)
    {
        if (result[i])
            a = 1;
        if (a)
            _putchar(result[i] + '0');
    }
    if (!a)
        _putchar('0');
    _putchar('\n');
    free(result);
    
}