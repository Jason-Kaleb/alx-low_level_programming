#include <stdio.h>
/**
 * main - main function of the program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	char alpha = 'a';
	char alphaCap = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alphaCap <= 'Z')
	{
		putchar(alphaCap);
		alphaCap++;
	}
	putchar('\n');
	return (0);
}
