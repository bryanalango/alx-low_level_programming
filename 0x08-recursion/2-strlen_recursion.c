#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to a string
 * Return: Returns length of a string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
