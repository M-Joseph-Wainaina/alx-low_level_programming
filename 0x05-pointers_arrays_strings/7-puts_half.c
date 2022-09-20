#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: string being tested
 *
 */

void puts_half(char *str)
{
	int ct, even, neg;

	for (ct = 0; str[ct] != '\0'; ct++);

	if ((ct % 2) == 0)
	{
		for (even = ct / 2; even <= ct; even++)
		{
			_putchar(str[even]);
		}
	}
	else
	{
		for (neg = (ct - 1) / 2; neg <= ct; neg++)
			_putchar(str[neg + 1]);
	}
	_putchar('\n');
}
