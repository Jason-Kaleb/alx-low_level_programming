#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: char pointer
 * Return: void
 */

void rev_string(char *s)
{
	char rev_t;
	int a, len;

	a = 0;
	len = 0;

	while (s[a++])
	{
		len++;
	}

	for (a = (len - 1); a >= (len / 2); a--)
	{
		rev_t = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = rev_t;
	}
}
