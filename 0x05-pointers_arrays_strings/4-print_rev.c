#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int a, b;

	for (b = 0; *(s + b) != '\0'; b++)
	{
		len++;
	}

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');

}
