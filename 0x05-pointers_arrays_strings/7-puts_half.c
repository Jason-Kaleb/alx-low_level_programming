#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char tye
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{		
		for (a /= 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (b = (a - 1) / 2; b < a - 1; b++)
		{
			_putchar(str[b + 1]);
		}
	}
	_putchar('\n');
}
