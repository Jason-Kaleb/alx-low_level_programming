#include <stdio.h>
/**
 * main - main function of my program(entry point)
 *
 * description: prints all possible different combinations of three digits
 * Return: always return 0 = success
 */
int main(void)
{
	int n, num, dig;

	for (n = 48; n < 56; n++)
	{
		for (num = 49; num < 57; num++)
		{
			for (dig = 50; dig < 58; dig++)
			{
				if (n >= num)
				{
					continue;
				}
				if (num >= dig)
				{
					continue;
				}
				if (n == num && num == dig)
				{
					continue;
				}
				putchar(n);
				putchar(num);
				putchar(dig);
				if (n == 55 && num == 56 && dig == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
