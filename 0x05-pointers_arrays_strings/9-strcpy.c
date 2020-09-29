#include "holberton.h"

/**
 * _strcpy - Function that copies a string
 * @dest: pointer destination
 * @src: Sting sources/string to copy
 * Return: Returns pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
