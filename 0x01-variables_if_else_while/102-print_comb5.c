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
	int n, num;

	for (n = 0; n < 99; n++)
	{
		for (num = 0; num <= 99; num++)
		{
			if (n != num && n <= num)
			{
				putchar(n / 10 + 48);
				putchar(n % 10 + 48);
				putchar(' ');
				putchar(num / 10 + 48);
				putchar(num % 10 + 48);
				/*if ((num * 100) != 9899)
				{
					putchar(',');
					putchar(' ');
				}*/
				if (n == 98 && num == 99)
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
