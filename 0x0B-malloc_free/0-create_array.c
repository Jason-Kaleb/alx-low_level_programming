#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a
 * specific char
 * @size: size of array
 * @c: first char
 * Return: pointer to array else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}

	return (ptr);
}
