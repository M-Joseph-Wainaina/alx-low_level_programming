#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of the numbers
 * Return: 0 on success 1 on error
 */

int main(int argc, char *argv[])
{
	
	int a, b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
