#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square(first int)
 * Return: void
 */

void print_square(int size)
{
	int rows = 0, cols;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (rows < size)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar(35);
			}
			_putchar('\n');
			rows++;
		}
	}
}

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);

	return (0);
}
