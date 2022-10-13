#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first value
 * @b: second value
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - returns the difference
 * @a: first value
 * @b: second value
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - multiplies two numbers
 * @a: first value
 * @b: second value
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}
/**
 * op_div - divides two numbers
 * @a: first value
 * @b: second value
 * Return: quotiont
 */

int op_div(int a, int b)
{
	int quo;

	quo = a / b;
	return (quo);
}
/**
 *  * op_mod - remainder of division of two numbers
 * @a: first value
 * @b: second value
 * Return: sum
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}


