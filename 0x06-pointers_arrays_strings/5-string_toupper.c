#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @lwr: string to be changed
 * Return: changed string
 */

char *string_toupper(char *lwr)
{
	int i;

	for (i = 0 ; lwr[i] != '\0' ; i++)
	{
		if (lwr[i] >= 'a' && lwr[i] <= 'z')
			lwr[i] = lwr[i] - 32;
	}
	return (lwr);
}
