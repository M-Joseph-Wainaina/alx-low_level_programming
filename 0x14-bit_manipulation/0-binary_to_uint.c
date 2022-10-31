#include "main.h"

int _bin(const char *b);
int _pow(int base, int exp);

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, len, j;
	int a;

	a = _bin(b);

	if (!b || a == 0)
		return (0);
	len = 0;
	while (b[len])
	{
		len++;
	}
	num = 0;

	for (i = len - 1, j = 0; i >= 0; j++, i--)
	{
		num = num + (_pow(2, j) * (b[i] - '0'));
	}
	return (num);
}

/**
 * _bin - checks if the string is only composed of 1's and zeros
 * @b: pointer to string
 * Return: 1 or zero
 */

int _bin(const char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _pow - power
 * @base: ..
 * @exp: ...
 * Return: power
 */

int _pow(int base, int exp)
{
	int result;
	int i;

	result = 1;
	for (i = 0; i < exp; i++)
	{
		result = result * base;
	}
	return (result);
}
