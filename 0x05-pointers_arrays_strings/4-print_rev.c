#include "holberton.h"

/**
 * print_rev - Prints a strin in reverse
 * @s: Point to string that will be printed
 *
 * Return: No return value. Function is void.
 */

void print_rev(char *s)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
	}
	for (n = m - 1; n >= s[m]; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}