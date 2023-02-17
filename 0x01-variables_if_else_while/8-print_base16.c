#include <stdio.h>
/**
 * main - main function of the program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	int base_16 = '0';
	int letter_base = 'a';

	while (base_16 <= '9')
	{
		putchar(base_16);
		base_16++;
	}
	while (letter_base <= 'f')
	{
		putchar(letter_base);
		letter_base++;
	}
	putchar('\n');
	return (0);
}
