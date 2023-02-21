#include "main.h"

/**
 * print_alphabet - function print_alphabet prints the alphabet in lower case
 *
 *
 * Return: always 0 = success
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
