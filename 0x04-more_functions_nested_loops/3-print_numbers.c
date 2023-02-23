#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
