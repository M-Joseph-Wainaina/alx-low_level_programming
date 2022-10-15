#include "variadic_functions.h"

/**
 * print_strings - function to print a string
 * @n: number of strings passed to the function
 * @separator: separator used
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	i = 0;

	while(i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i == (n - 1))
				break;
		if (separator != NULL)
			printf("%c", *separator);
		printf(" ");
		i++;
	}
	printf("\n");
	va_end(args);
}
		
		

