#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			if ((r * c) >= 10)
			{
			_putchar(((r * c) / 10) + '0');
			_putchar(((r * c) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
			_putchar(((r * c) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
