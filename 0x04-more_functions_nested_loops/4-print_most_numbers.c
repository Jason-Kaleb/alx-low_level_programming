#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 besides 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if ((a == 50) || (a == 52))
		{
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
