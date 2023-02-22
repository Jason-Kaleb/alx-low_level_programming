#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: letter/sign input
 * Return: 1 to print +, 0 to print 0, -1 to print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		_putchar('0');
	}
}
