#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to evaluate
 * @s2: second string to evaluate
 * Return: pointer that contains the concatenated
 * string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < s1[a]; a++)
		;
	a++;
	for (b = 0; b < s2[b]; b++)
		;
	b++;
	str = malloc(sizeof(char) * (a + b));

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		str[c] = s1[c];
	}
	for (c = 0; c < a + b; c++)
	{
		str[c] = s2[c - a];
	}
	str[c + 1] = '\0';

	return (str);
}

int main(void)
{
	char *s;

	s = str_concat("Betty", "Holberton");
	if (s == NULL)
	{
		printf("failed");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
