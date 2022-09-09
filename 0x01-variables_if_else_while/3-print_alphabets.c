#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase then followed by the uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
