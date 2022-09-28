#include "main.h"

int _is_prime(int, int);

/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 0 for prime 1 for otherwise
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - finds if a number is prime
 * @n: number
 * @i: iteration
 * Return: 0 for not prime and 1 otherwise
 */

int _is_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (i > n)
	{
		return (0);
	}

	if (n % i > 0)
	{
		return (_is_prime(n, i + 1));
	}

	return (0);
}
