#include "main.h"

/**
 * argstostr - converts command line
 * arguments to a string
 * @ac - number of arguments
 * @av - arguments
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *p;

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
	p = malloc((sizeof(char) * len) + ac);
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

		       	



