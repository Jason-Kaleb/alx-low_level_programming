#include <stdio.h>
/**
 * main - main function of program(entry point)
 *
 * description: no repeating of combination of ASCII digits (two)
 * Return: always return 0 = success
 */
int main(void)
{
	int n, num;

	for (n = 48; n < 57; n++)
	{
		for (num = 48; num < 58; num++)
		{
			if (n > num)
			{
				continue;
			}
			if (n == num)
			{
				continue;
			}
			putchar(n);
			putchar(num);
			if (n == 56 && num == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
