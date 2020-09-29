#include "holberton.h"

/**
 * print -rev - Prints a strin in reverse
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
