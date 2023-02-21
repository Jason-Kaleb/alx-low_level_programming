#include "main.h"

/**
 * main - main function of my program (entry point)
 *
 *
 * description: prints the alphabet in lower case
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
	return (0);
}
