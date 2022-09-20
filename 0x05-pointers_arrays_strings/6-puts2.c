#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int a, b, c;

	b = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		b++;
	}

	for (c = 0; c <= b; c = c + 2)
	{
		_putchar(*(str + c));
	}
	_putchar('\n');
}
