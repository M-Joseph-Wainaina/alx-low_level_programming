#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: buffer
 * @src: string to be copied
 * @n: characters to be printed
 * Return: void pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
	}

	for (c = 0; c < n && c < b; c++)
	{
		*(dest + c) = *(src + c);
	}
	for (; c < n; c++)
	{
		*(dest + c) = '\0';
	}
	return (dest);
}
