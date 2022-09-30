#include "main.h"

/**
 * main - prints all the arguments passed to it
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

