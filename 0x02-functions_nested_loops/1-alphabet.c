#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return;
}

