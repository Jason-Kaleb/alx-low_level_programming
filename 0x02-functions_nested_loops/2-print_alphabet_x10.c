#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: always 0 = success
 */
void print_alphabet_x10(void)
{
	int a, j = 0;

	while (j < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		j++;
		_putchar('\n');
	}
}
