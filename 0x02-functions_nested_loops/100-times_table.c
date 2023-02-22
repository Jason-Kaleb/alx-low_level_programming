#include "main.h"

/**
 * print_times_table - prints the 9 times table depending on the number
 * @n: number of for times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, s;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				s = (a * b);
				if (s <= 99)
				{
					_putchar(' ');
				}
				else if (s <= 9)
				{
					putchar(' ');
				}
				else if (result >= 100)
				{
					_putchar((s / 100) + '0');
					_putchar((s / 10) % 10 + '0');
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
}
