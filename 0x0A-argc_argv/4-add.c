#include "main.h"

int _checks(char *);
/**
 * main - add numbers passed in commandline
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 1)
	{
		printf("0\n");

	/* checks for nongits */
	for (a = 1; a < argc; a++)
	{
		b = _checks(argv[a]);
		if (b == 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	/* convert argv to integers */
	/* add and print the integers */
	result = 0;
	for (a = 0; a < argc; a++)
	{
		result = result + atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}

/**
 * _checks - checks for non digits
 * @s: string to be checked
 * Return: 1 if found 0 if not
 */

int _checks(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	if (!(*s >= 48 && *s <= 57))
	{
		return (1);
	}
	_checks(s + 1);
}
