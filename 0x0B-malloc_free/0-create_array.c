#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Entry point. Creates an array of chars
 * @size: Size of the array
 * @c: Argumenet charaacters
 * Return: Pointer to the array, Null upon fail
 */

char *create_array(unsigned int size, char c)
{
  unsigned int x;
  char *p;

  p = malloc(sizeof(char) * size);
    if (size == 0 || p == NULL)
      return (NULL);

    x = 0;
    while (x < size)
    {
      p[x] = c;
      ++x;
    }
    return (p);
}
