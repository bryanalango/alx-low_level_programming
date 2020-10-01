#include "holberton.h"

/**
 * reverse_array - Entry point. Reverses the elements of an array
 * @a: Given array
 * @n: Size of the array
 * Return: No return value. Function is void
 */

void reverse_array(int *a, int n)
{
	int len;
	int temp;

	len = 0;
	for (; len < n / 2; len++)
	{
		temp = a[len];
		a[len] = a[n - len - 1];
		a[n - len - 1] = temp;
	}
}
