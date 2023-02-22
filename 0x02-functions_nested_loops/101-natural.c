#include <stdio.h>

/**
 * main - sums all the multiples of 3 or 5
 * Return: 0 always = success
 */
int main(void)
{
	int n, sum;

	for (n = 0; n <= 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
