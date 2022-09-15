#include <stdio.h>

/**
 * main - prints prime number
 * Return: 0
 */

int main(void)
{
	long int p, n;

	n = 612852475143;

	for (p = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			do {
				n = n / p;
			} while (n % p == 0);

		}

	}
	p--;
	printf("%ld\n", p);
	return (0);
}
