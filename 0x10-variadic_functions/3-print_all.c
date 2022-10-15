#include "variadic_functions.h"

void print_a_char(char *separator, va_list args);
void print_a_string(char *separator, va_list args);
void print_an_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
/**
 * print_all - prints anything passed to it
 * @format: format of strings to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{"c", print_a_char},
		{"i", print_an_integer},
		{"f", print_a_float},
		{"s", print_a_string}
	};
	unsigned int i;
	unsigned int j;
	char *separator = "";

	i = j = 0;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");

}

/**
 * print_a_char - prints a char
 * @separator: separator
 * @args: a list of variadic arguments
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_an_integer - prints an interger
 * @separator: separator of chars
 * @args: a list of variadic arguments
 */

void print_an_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - print a float number
 * @separator: separator of char
 * @args: list of variadic arguments
 */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_string - prints a string
 * @separator: separator of chars
 * @args: list of variadic arguments
 */

void print_a_string(char *separator, va_list args)
{
	char *arg;

	arg = va_arg(args, char *);
	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
