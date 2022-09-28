#include "main.h"

int _len(char *s, int i);
int _palindrome(char *s, int, int);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _len(s, 1) - 1;
	return (_palindrome(s, 0, len));
}

/**
 * _len - checks length
 * @s: string
 * @i: iteration
 * Return: string length
 */

int _len(char *s, int i)
{
	if (*(s + i) == '\0')
	{
		return (i);
	}
	return (_len(s, i + 1));
}

/**
 * _palindrome - checks if string is a palindrome
 * @s: string
 * @a: iteration
 * @len: length of string
 * Return: 1 for palindrome 0 for otherwise
 */

int _palindrome(char *s, int a, int len)
{
	if (len == a || a > len)
	{
		return (1);
	}
	if (s[a] == s[len])
	{
		return (_palindrome(s, a + 1, len - 1));
	}
	return (0);
}
