#include "main.h"

/**
 * string_toupper - converts lower cases into upper
 * @str: string to be converted
 * Return: void pointer
 */
char *string_toupper(char *str)
{
	int a, b;

	for (a = 0; *(str + a) != '\0'; a++)
	{
	}
	for (b = 0; b < a; b++)
	{
		if (str[b] > 96 && str[b] < 123)
		{
			str[b] = str[b] - 32;
		}
	}
	return (str);
}
