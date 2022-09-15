#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: character pased from main
 * Return: 1 if upper 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}


