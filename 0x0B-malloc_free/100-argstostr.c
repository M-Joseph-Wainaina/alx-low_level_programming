#include "main.h"
int check(char **av, int a, int ac);

/**
 * argstostr - converts command line
 * arguments to a string
 * @ac: number of arguments
 * @av: ariguments
 * Return: void pointer to char
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *p;

	if (ac == 0 || check(av, 1, ac) == 1)
	{
		return (NULL);
	}

	len = 0;
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b])
		{
			b++;
			len++;
		}
	}
	p = malloc((sizeof(char) * len) + ac + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	c = 0;
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b])
		{
			p[c] = av[a][b];
			b++;
			c++;
		}
		p[c++] = '\n';
	}
	return (p);
}

/**
 * check - check for null in arguments
 * @av: arguments
 * @ac: number of arguments
 * @a: iterator
 * Return: 1 if NULL found or 0 otherwise
 */

int check(char **av, int a, int ac)
{
	if (av[a] == NULL)
	{
		return (1);
	}
	if (a == ac - 1)
	{
		return (0);
	}
	return (check(av, a + 1, ac));
}



