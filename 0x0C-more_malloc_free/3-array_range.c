#include "main.h"

/**
 * array_range - allocates memmory for an array of ints
 * @min: minimum value of array
 * @max: maximum value
 * Return: int pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int a, b, c;

	if (min > max)
		return (NULL);
	b = max - min;
	p = (int *)malloc(sizeof(int) * (b + 1));
	if (p == NULL)
		return (NULL);
	c = 0;
	for (a = min; a <= max; a++)
	{
		p[c] = a;
		c++;
	}
	return (p);
}
