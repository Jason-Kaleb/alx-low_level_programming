#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: no return
 */
void jack_bauer(void)
{
	int a;
	int n;

	for (a = 0; a <= 23; a++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
