#include "main.h"

int word_len(char *s);

/**
 * strtow - a function that splits a string into words
 * @str: string to be split
 * Return: split string
 */

char **strtow(char *str)
{
	int len, a, w, b, d, x;
	char **p;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}

	w = 0;
	for (a = 0; a < len - 1; a++)
	{
		if (str[a] == ' ' && !(str[a + 1] == ' '))
		{
			w += 1;
		}
	}
	if (w == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	b = 0;
	for (a = 0; a < len - 1; a++)
	{
		if (!(str[a] == ' ') && (str[a - 1] == ' ' || a == 0))
		{
			d = word_len(str + a);
			p[b] = malloc(sizeof(char) * d);
			for (x = 0; x < d; x++)
			{
				p[b][x] = str[a];
				a++;
			}
			b++;
		}

	}
	p[b] = NULL;
	return (p);
}

/**
 * word_len - return length of a word in a string
 * @s: string
 * Return: word length
 */

int word_len(char *s)
{
	int a;

	for (a = 0; *(s + a) != ' '; a++)
	{
	}
	return (a);
}
