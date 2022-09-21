#include "main.h"

/**
 * _*strncat - comcatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 * Return: void pointer
 */

char *_strncat(char *dest, char *src, int n)
{
        int a, b, c, d;

        for (a = 0; *(dest + a) != '\0'; a++)
        {
        }
        for (b = 0; *(src + b) != '\0'; b++)
        {
        }

        c = a;

        for (d = 0; (a + d) <= (a + n - 1); d++)
        {
                *(dest + c) = *(src + d);
                c++;
        }
        return (dest);
}
