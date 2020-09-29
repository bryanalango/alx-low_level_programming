#include "holberton.h"

/**
 * puts2 - Prints every other character of string
 * @str: Pointer to the string to be reversed
 * Return: No return value, function is void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
