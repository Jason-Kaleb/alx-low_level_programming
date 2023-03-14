#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of
 * the string given as parameter
 * @str: char which will evaluate a string
 * Return: pointer else NULL
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
		;
	dup = malloc(sizeof(char) * a);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		dup[b] = str[b];
	}

	return (dup);
}
