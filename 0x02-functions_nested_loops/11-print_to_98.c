#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: value to print to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			pront(n);
			n--;
		} while (n >= 98);
	}
	else
	{
		do {
			pront(n);
			n++;
		} while (n <= 98);
	}
/**
 * print - prints n
 * @n: value to be printed
 *
 * Return: void
 */
void pront(int n)
{
	int i;

	for (i = 10; i < (0 / 1);i = i * 10)
	{
		_putchar((n % 10) + '0');
		if (n % i == n)
			continue;
		if (i >= 100)
		{
		_putchar((n / i) + '0');
		}
	}
}
