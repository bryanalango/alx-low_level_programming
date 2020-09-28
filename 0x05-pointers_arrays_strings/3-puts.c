# include "holberton.h"

/**
 * _puts - Entry point. Prints a string with a new line
 * @str: String to be printed
 * Return: No return value. Function is void
 */

void _puts(char *str)
{
	int chars;

	for (chars = 0; str[chars] != '\0'; chars++)
	{
		_putchar(str[chars]);
	}
	_putchar('\n');
}
