#include "holberton.h"

/**
 * print_triangle - Entry point. Prints a Triangle
 * @size: Size of triangle to be printed
 * Return: No return as function is void
 */

void print_triangle(int size)
{
	int par1, par2, space, output;

	for (par1 = 1; par1 <= size; par1++)
	{
		space = size - par1;
		output = size - space;

		for (par2 = 1; par2 <= space; par2++)
		{
			_putchar(' ');
		}
		for (par2 = 1; par2 <= output; par2++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
	if (size <= 0)
		_putchar('\n');
}
