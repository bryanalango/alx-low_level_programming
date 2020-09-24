# include "holberton.h"

/**
 * print_line - Entry Point. Prints lines
 * @n: Initial Parameter.
 *
 * Description: '_' is input dependent
 * Return: Returns nothing since function is void
 */

void print_line(int n)
{
	int iteration;
	{
		for (iteration = 1; iteration <= n; iteration++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
