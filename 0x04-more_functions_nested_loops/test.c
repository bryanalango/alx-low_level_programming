# include "holberton.h"

/**
 * print_line - Entry point. Print straight lines
 * @n: Number of lines to be printed.
 * Return: Nothing (FUnction is void)
 */

void print_line(int n)
{
	int line;
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}