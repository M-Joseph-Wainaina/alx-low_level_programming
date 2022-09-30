#include "main.h"

/**
 * main - prints the number of arguements passed to main
 * @argc: number of arguments passed to main
 * @argv: array of pointer
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
