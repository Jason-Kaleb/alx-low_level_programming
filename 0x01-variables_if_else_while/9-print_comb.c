#include <stdio.h>
/**
 * main - main function of my program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
