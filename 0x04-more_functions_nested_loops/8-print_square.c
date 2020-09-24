# include "holberton.h"

/**
 * print_square - Entry point. Prints a square
 * @size: size of the square
 * Return: No return value.
 */

void print_square(int size)
{
	int first, second;

	for (first = 1; first <= size; first++)
	{
		for (second = 1; second <= size; second++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
