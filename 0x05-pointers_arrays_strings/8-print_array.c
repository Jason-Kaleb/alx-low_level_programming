#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: char type
 * @n: number of elements the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z == 0)
		{
			printf("%d", a[z]);
		}
		else
		{
			printf(", %d", a[z]);
		}
	}
	_putchar('\n');
}
