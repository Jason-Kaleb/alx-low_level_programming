#include <stdio.h>
/**
 * main - main function of the program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
