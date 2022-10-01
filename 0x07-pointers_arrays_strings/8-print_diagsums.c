#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals
 * @a: 2d array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int  c, b, sum1, sum2;

	sum1 = 0;
	b = size;
	
	for (c = 1; c < size; c++)
	{
		 printf("%d\n", *a);
		sum1 += *(a);
		sum2 += *(a + b);
		a += (size + 1);
		b -= 2;	
	}
	printf("\n%d, %d\n", sum1, sum2);

}

