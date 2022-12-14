#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{

	int a, b, c, d;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
	}
	c = a;
	d = 0;

	while ((d + c) < (a + b))
	{
		*(dest + (d + c)) = *(src + d);
		d++;
	}

	return (dest);
}
