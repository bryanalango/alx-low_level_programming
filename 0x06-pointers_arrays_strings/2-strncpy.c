#include "holberton.h"

/**
 * _strncpy - Entry Point. Copying a string
 * @dest: Destination String
 * @src: Source input string
 * @n: Possible elements of a string
 * Return: Returns a copied destination string
 *
 */


char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
