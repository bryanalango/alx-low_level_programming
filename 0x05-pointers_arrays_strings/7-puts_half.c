#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer to a string to be printed
 * Return: No return Value
 */

void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	for (b = a / 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n')
}

