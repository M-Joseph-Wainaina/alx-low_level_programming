#include "3-calc.h"

/**
 * main - calls other functions
 * @argv: array of chars
 * @argc: count of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	(get_op_func(argv[2]))(a, b);
	 return (0);
}
