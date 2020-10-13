#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - counts the length of string.
 * @s: Value string check.
 * Return: string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
	;
	return (i);

}

/**
 * str_concat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: Only both strings.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len, len1;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = _strlen(s1);
	len1 = _strlen(s2);

	c = malloc(sizeof(char) * (len + len1 + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		c[i] = s1[i];
	for (; i < len + len1; i++)
		c[i] = s2[i - len];
	c[len + len1] = '\0';

	return (c);
}
