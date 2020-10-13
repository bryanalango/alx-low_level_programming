#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Entry Point. Returns function to a new string.
 * @str: Pointer to string
 * Return: Pointer to a string that's a duplicate of str
 */

char *_strdup(char *str)
{
	int len;
	char *out;

	len = 0;
	while (*str++)
		++len;

	out = malloc(sizeof(char) * (len + 1));

	if (str == NULL || !out)
		return (NULL);

	for (len++; len--;)
		out[len] = *--str;

	return (out);
}
