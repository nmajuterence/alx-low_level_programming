#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: function parameter
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char r = s[0];
	int l = 0;
	int j;

	while (s[l] != '\0')
		l++;
	for (j = 0 ; j < l ; j++)
	{
		l--;
		r = s[j];
		s[j] = s[l];
		s[l] = r;
	}
}

