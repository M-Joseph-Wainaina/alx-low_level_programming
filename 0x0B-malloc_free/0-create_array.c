#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to fill array
 * Return: void pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int a;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= size; a++)
	{
		*ptr = c;
		ptr++;
	}
	ptr -= size;
	return (ptr);
}
