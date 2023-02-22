#include "main.h"

/**
 * times_table - prints the 9 times table;
 * Return: nothing
 */
void times_table(void)
{
	int a, n, s;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			s = (a * n);
			if (s <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((s / 10) + '0');
			}
			_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
