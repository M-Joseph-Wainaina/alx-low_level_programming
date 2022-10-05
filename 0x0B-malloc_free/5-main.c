#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char **s;
    int a;
   
    s = argstostr(ac, av);
    if (s == NULL)
    {
        printf("failed to allocate memory");
	 return (1);
    }
    for(a = 0; a < ac; a++)
    { 
    	printf("%s\n", s[a]);
    }
    free(s);
    return (0);
}
