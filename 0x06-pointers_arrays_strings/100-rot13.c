#include "main.h"

/**
 * rot13 - encodes a string
 * str: string to be encoded
 * Return: string
 */

char *rot13(char *str)
{
	char a_m[] = "abcdefghijklm";
	char n_z[] = "nopqrstuvwxyz";
	int len, a, b;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (a = 0; a < len; a++)
	{
		for (b = 0; b <= 13; b++)
		{
			if (str[a] == a_m[b] || str[a] == (a_m[b] - 32))
			{
				str[a] = str[a] + 13;
			}
			else if (str[a] == n_z[b] || str[a] == (n_z[b] - 32))
			{
				str[a] = str[a] - 13;
			}
		}
	}
	return (str);
}
