#include "holberton.h"

/**
 * print_diagonal - Entry Point. Prints Diagonal Line
 * @n: Number of lines to be Printed
 * Return: No return since function is void
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
