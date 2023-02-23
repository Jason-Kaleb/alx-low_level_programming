#include "main.h"

/**
 * print_line - draws a straigt line
 * @n: number of times the character _ gets printed
 * Return: void
 */

void print_line(int n)
{
	int uscore;

	for (uscore = 0; uscore < n; uscore++)
	{
		_putchar(95);
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
