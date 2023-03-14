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

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(1 % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);

	return (0);
}
