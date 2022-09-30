#include "main.h"

/**
 * main - calculates change
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	c = 0;

	if (a / 25 != 0)
	{
		c = c + a / 25;
		a = a % 25;
	}
	if (a / 10 != 0)
	{
		c = c + a / 10;
		a = a % 10;
	}
	if (a / 5 != 0)
	{
		c = c + a / 5;
		a = a % 5;
	}
	if (a / 2 != 0)
	{
		c = c + a / 2;
		a = a % 2;
	}
	c = c + a / 1;
	printf("%d\n", c);
	return (0);
}
