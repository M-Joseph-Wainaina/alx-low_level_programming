#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers passed to itj
 * @separator: char used to separate the list
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}

	}
	printf("\n");
	va_end(args);
}
