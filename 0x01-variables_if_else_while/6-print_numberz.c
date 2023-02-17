#include <stdio.h>
/**
 * main - main function of the program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	char n = '0';

	while (n < ':')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
