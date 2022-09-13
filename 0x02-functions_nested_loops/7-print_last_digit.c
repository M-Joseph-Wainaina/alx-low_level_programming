#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @l: number passed from main
 *
 * Return: last digit
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}

