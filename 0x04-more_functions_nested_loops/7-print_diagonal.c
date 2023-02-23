#include "main.h"

/**
 * print_diagonal - prints the character \
 *
 * @n : number of times the character should be printed
 * number of times \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
			if (n <= 0)
			{
				_putchar('\n');
			}
		}
		_putchar(92);
		_putchar('\n');
	}
}
