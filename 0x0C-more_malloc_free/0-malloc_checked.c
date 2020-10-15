#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc.
  * @b: amount of memory of the array.
  * Return: allocated pointer in the memory..
  */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
