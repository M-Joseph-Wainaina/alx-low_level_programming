#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	do {
		putchar((i % 10) + '0');
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
