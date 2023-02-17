#include <stdio.h>
/**
 * main - main function of the program (entry point)
 *
 * Return: always return 0 = success
 */
int main(void)
{
	char alpha = '`';

	while (alpha <= 'y')
	{
		alpha++;
		if (alpha == 'e')
		{
			continue;
		}
		if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

