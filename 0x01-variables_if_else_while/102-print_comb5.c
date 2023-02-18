#include <stdio.h>
/**
 * main - main function of my program(entry point)
 *
 * description: prints all possible combinations of two two-digit numbers
 *  --> no repeated digits included
 * Return: always return 0 = success
 */
int main(void)
{
	int n, num, numb, dig;

	for (n = 48; n < 58; n++)
	{
		for (num = 48; num < 57; num++)
		{
			for (numb = 48; numb < 58; numb++)
			{
				for (dig = 49; dig < 58; dig++)
				{
					if (n > numb)
					{
						continue;
					}
					if (num >= dig)
					{
						continue;
					}
					putchar(n);
					putchar(num);
					putchar(' ');
					putchar(numb);
					putchar(dig);
					if (n == 57 && num == 56)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
