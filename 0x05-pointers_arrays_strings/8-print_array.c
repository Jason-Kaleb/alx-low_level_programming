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
	int z = 0;

	if (n > 0)
	{
		while (z < n)
		{
			if (z == 0)
			{
				_putchar(a[z]);
			}
			else
			{
				_putchar(' ');
				_putchar(a[z]);
			}
			z++;
		}
	}
	_putchar('\n');
}
