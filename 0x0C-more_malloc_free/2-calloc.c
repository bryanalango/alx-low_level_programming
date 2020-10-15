#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: array.
  * @size: size of elements.
  * Return: p.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (x == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		x[a] = 0;
	}
	return (x);
}
