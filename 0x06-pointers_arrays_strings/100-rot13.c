#include "main.h"

/**
 * rot13 - encodes a string
 * str: string to be encoded
 * Return: string
 */

char *rot13(char *str)
{
	char a_z[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int len, a, b;

	for (len = 0; str[len] != '\0'; len++)
	{
		if(
			for  (b = 0; b < 26; b++)
			{
				str[len] = str[len] + 13	
			}
	}

/**
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	printf("%d\n", len); 
	for (a = 0; a < len; a++)
	{
		for (b = 0; b < 27; b++)
		{
		if (str[a] == a_z[b])
			{
				while (b < 14 && b > 0 || b > 26 && b < 40 ){
					str[a] = str[a] + 13;
					break;
				}
				while (b > 13 && b < 27 || b > 40 && b < 53){
					str[a] = str[a] - 13;
					break;
				}
			}
		}
	}
	
	return (str);
*/
	}
