#include "holberton.h"
/**
 * string_toupper - Entry Point. Changes lowercase cto uppercase
 * @str: Pointer to string whose characters are changed
 * Return: Returns string with changed charcaters
 */

char *string_toupper(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
		if (str[len] >= 97 && str[len] <= 122)
		{
			str[len] -= 32;
		}
	}
	return (str);
}
