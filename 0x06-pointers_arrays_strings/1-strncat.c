#include "holberton.h"

/**
 * _strncat - Entry Point. Concatenates two strings with conditions
 * @dest: String to be concatenated to
 * @src: string to concatenated
 * @n: Possible number of characters to concatenate
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int z;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	z = 0;
	while (src[z] != 0 && z < n)
	{
		dest[len] = src[z];
		z++;
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
