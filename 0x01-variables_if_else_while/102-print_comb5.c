#include <stdio.h>
/**
 * main - main function of my program(entry point)
 *
 * description: prints all possible combinations of two two-digit numbers
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
					putchar(n);
					putchar(num);
					putchar(' ');
					putchar(numb);
					putchar(dig);
					if (n == 58 && num == 57)
					{
						break;
					}
					if (numb == 58 && dig == 58)
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
