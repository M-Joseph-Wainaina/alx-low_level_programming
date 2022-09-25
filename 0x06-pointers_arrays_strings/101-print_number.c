#include "main.h"

/**
 * print_number - prints an integer
 * n: integer
 * Return: void
 */

void print_number(int n)
{
	int a, b, c, d, e;
	
	if (n < 0);
	{
		n = -n;
		_putchar('-');
	}

	e = n;
	for (a = 1; e % 10 != e ;a++)
	{
		e = e / 10;
	}
	
	for (b = a - 1; b > 0; b--)
	{
		c = _pow(10, b);
		d = n / c;
		n = n % c;
		_putchar(d + '0');
	}
	
	_putchar(n + '0');
	_putchar('\n');

}
int _pow(int a, int b)
{
	int result, c;

	result = 1;

	for (c = b; c > 0; c--)
	{
		result = result * a;
	}
	return (result);
}	



