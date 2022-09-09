#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 1 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
