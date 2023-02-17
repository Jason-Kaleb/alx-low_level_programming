#include <stdio.h>
/**
 * main - main function of my program(Entry point)
 *
 *
 * Return: always return 0 = success
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		putchar('\n');
		alpha++;
	}
	return (0);
}
