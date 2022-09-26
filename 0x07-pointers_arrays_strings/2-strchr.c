#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int a, b;

	b = 0;

	while ( s[b] != '\0')
	{
		b++;
	}

	while (a < b)
	{
		if ( s[a] == c)
		{
			s += a;
			return (s);
		}
		a += 1;
	}
	return ('\0');
}
