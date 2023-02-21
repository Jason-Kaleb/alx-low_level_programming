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
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		j++;
		_putchar('\n');
	}
}
