#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the first character
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, c; 

	b = 0;
	c = 0;

	while (b < 8)
	{
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		c = 0;
		b++;
		_putchar('\n');

	}
}
