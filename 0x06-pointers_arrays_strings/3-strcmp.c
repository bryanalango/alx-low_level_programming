#include "holberton.h"

/**
 * _strcmp - Entry Point - Compares two strings
 * @s1: First String
 * @s2: Second String
 * Return: Returns the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int len;
	int diff;

	diff = 0;
	len = 0;
	while ((s1[len] != '\0' || s2[len] != '\0') && diff == 0)
	{
		if (s1[len] != s2[len])
		{
			diff = s1[len] - s2[len];
		}
		len++;

	}
	return (diff);

}
