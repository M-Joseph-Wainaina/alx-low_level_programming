#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle passed from main
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size - j; i > 0; i--)
			{
				_putchar(' ');
			}
		for (k = j; k > 0; k--)
		{
		_putchar('#');
		}
		if ((j - 1) == size)
			continue;
		_putchar('\n');
		}
	}
	else if(size <= 0)
	{
		_putchar('\n');
	}
}
