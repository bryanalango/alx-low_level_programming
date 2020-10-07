#include "holberton.h"

/**
 * factorial - Entry Point. Returns a factorial of an integer.
 * @n: Integer factorial
 * Return: -1 for error and factorial of n for success.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
