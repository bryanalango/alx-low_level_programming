#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string to be reversed.
 * Return: No return value. Function is void
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
