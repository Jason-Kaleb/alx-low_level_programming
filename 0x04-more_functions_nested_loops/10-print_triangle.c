#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle(int)
 * Return: void
 */

void print_triangle(int size)
{
	int rows, cols;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				if (cols < size - rows - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
