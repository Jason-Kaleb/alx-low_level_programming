#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints the last digit of a number
 * @a: integer to print
 * Return: int type
 */
int print_last_digit(int a)
{
	int b;

	b = abs(a % 10);
	_putchar(b + '0');
	return (b);
}
