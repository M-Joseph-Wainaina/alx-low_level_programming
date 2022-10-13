#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @size: number of elements in an array
 * @cmp: pointer to a function to compare values
 * Return: -1 if no elements match
 * -1 if size <= 0
 *  index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		b = cmp(array[a]);
		if (b == 1)
		{
			return (a);
		}
	}
	return (-1);
}
		

