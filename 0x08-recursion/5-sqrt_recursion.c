#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - returns the natural
 * squareroot of a number
 * @n: number
 * Return: squareroot
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds the natural sqrt of numbers
 * @n: number to be sqrted
 * @i: sqrt
 * Return: squareroot
 */

int _sqrt(int n, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}


