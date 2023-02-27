#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: first char pointer
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0, b, leng;

	while (s[a] != '\0')
	{
		a++;
	}

	leng = a;
	b = (leng - 1);

	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
