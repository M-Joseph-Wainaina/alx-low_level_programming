#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes
 * Return: void pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (accept[b] == s[a])

			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}

	return ('\0');
}


