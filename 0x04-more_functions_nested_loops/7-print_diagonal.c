#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of times \ is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int r;
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (r = 0; r < i; r++)
		{
		_putchar(' ');
			continue;
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}

