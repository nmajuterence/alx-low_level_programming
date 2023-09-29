#include "main.h"
/**
 * _stringlength_recursion - length of the string
 * @s: string
 * Return: length of the string
 */
int _stringlength_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _stringlength_recursion(s + 1));
}
/**
 * compare_str - compare string characters
 * @s: string
 * @begin: lowest iterator
 * @end: highest iterator
 * Return: int
 */
int compare_str(char *s, int begin, int end)
{
	if (*(s + begin) == *(s + end))
	{
		if (begin == end || begin == end + 1)
			return (1);
		return (0 + compare_str(s, begin + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, _stringlength_recursion(s - 1)));
}
