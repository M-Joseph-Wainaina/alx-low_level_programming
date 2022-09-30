#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: size of argv
 * @argv: pointer of arrays
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}

	return (0);
}
