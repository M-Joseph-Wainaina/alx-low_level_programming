#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;
	unsigned int e;

	a = 0;
	while (s[a])
	{
		a++;
	}
	c = 0;
	while (accept[c])
	{
		c++;
	}
	
	e = 0;
	for (b = 0; b < a; b++)
	{
		if (s[b] == ' ')
			break;
		for (d = 0; d < c; d++)
		{
			if (s[b] == accept[d])
			{
				e++;
			}
		}
	}
	return (e);
}

