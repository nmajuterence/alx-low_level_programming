#include "main.h"

/**
 * count_word - function to count the n words in a string
 * @s: string
 * Return: number of words in a string
 */
int count_word(char *s)
{
	int _flag, x, y;

	_flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			_flag = 0;
		else if (_flag == 0)
		{
			_flag = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings or NULL (Error)
 */
char **strtow(char *str)
{
	char **mtrix, *_tmp;
	int n, m = 0, strlen = 0, _words, o = 0, _start, _end;

	while (*(str + strlen))
		strlen++;
	_words = count_word(str);
	if (_words == 0)
		return (NULL);

	mtrix = (char **) malloc(sizeof(char *) * (_words + 1));
	if (mtrix == NULL)
		return (NULL);

	for (n = 0; n <= strlen; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (o)
			{
				_end = n;
				_tmp = (char *) malloc(sizeof(char) * (o + 1));
				if (_tmp == NULL)
					return (NULL);
				while (_start < _end)
					*_tmp++ = str[_start++];
				*_tmp = '\0';
				mtrix[m] = _tmp - o;
				m++;
				o = 0;
			}
		}
		else if (o++ == 0)
			_start = n;
}

	mtrix[m] = NULL;

	return (mtrix);
}
