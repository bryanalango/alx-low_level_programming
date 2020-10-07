#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Entry point. Reverses a string
 * @s: Pointer to a string to be reversed
 * Return: No return value. Function is void
 */

void rev_string(char *s)
{
	int f, b, temp;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	f-=1;

	for (b = 0; b < f; b++)
	{
		temp = s[f];
		s[f] = s[b];
		s[b] = temp;
	}

}

int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}