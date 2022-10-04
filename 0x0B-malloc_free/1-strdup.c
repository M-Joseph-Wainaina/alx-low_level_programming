#include "main.h"

/**
 * _strdup -  function that returns a pointer 
 * to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: string passed
 * Return: void pointer
 */

char *_strdup(char *str)
{
	int a, b;
	char *p;

	a = 0;
	while (str[a])
	{
		a++;
	}
	a++;
	p = malloc(a * sizeof(char));
	if (p = NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		p[b] = str[b];
	}	
	return (p);
}
