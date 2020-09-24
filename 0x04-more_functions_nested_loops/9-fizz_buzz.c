#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point. Prints Fizz, Buzz, and FizzBuzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int multiples;

	for (multiples = 1; multiples <= 100; multiples++)
	{
		if ((multiples % 3 == 0) && (multiples % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (multiples % 3 == 0)
		{
			printf("Fizz");
		}
		else if (multiples % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", multiples);

		if (multiples < 100)
		{
			putchar(' ');

		}

	}
	putchar('\n');

	return (0);
}
