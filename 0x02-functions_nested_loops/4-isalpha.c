#include "main.h"

/**
 * _isalpha - determines whether inputs alphabetic
 * @c: variable declared in main
 *
 * Return: 1 for alphabetic and 0 for otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
