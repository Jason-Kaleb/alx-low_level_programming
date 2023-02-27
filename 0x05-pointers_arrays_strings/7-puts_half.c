#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char tye
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
