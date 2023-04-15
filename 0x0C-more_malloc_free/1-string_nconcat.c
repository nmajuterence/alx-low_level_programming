#include "main.h"

/**
 * string_nconcat -  this function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;

	string = malloc(sizeof(char) * d + 1);
	if (string == NULL)
		return (NULL);

	c = 0;
	while (b < d)
	{
		if (b <= a)
			string[b] = s1[b];
		if (b >= a)
		{
			string[b] = s2[c];
			c++;
		}
		b++;
	}
	string[b] = '\0';
	return (string);
}
