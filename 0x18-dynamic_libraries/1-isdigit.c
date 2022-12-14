#include "stdio.h"

/**
 * _isdigit - checks for digits one through nine
 * @c: digit to be tested
 * Return: 0 if digit and 1 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
