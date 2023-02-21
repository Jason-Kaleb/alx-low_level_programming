#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: always 0 = success
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int j = 0;

	while (j <= 10)
	{
		j++;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
