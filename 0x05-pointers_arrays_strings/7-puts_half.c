#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer to a string to be printed
 * Return: No return Value
 */

void puts_half(char *str)
{
	int m, n;

	for (m = 0; str[m] != '\0'; m++)
	{
	}
	for (n = m / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

