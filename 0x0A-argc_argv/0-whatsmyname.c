#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the name of program
 * @argc: size of argv
 * @argv: pointer of arrays
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{

	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
