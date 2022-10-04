#include "main.h"

/**
 * alloc_grid - creates a 2d array
 * @width: width of grid
 * @height: height of grid
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int a, b, e, d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	c = malloc(sizeof(int *) * height);
	if (c == NULL)
	{
		free (c);
		return (NULL);
	}
	for (e = 0; e < height; e++)
	{
		c[e] = malloc(sizeof(int) * width);
		if (c[e] == NULL)
		{
			for (d = e; d >= 0; d--)
			{
				free(c[d]);
				return (NULL);
			}
			free(c);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}
