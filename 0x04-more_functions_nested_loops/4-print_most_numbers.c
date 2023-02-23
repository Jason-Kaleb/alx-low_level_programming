#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9
 * but not 2 and 4
 * @a: character to print
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 53 && a == 55)
		{
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
