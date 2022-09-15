#include <stdio.h>

/**
 * main - print 1 through 100 but
 * for multiples of three fizz and
 * buzz for multiples of 5 and
 * fizzbuzz for '' of 3 and 5
 *
 *Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 100; i++)
	{

		j = i % 3;
		k  = i % 5;

		if (j == 0 && k != 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i == 100)
		{
			printf("Buzz");
			continue;
		}
		else if (k == 0 && j != 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (j == 0 && k == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i == 100)
		{
			printf("Buzz");
			continue;
		}
		else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
