#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 always = success
 */
int main(void)
{
	int n = 0, a = 1, b = 2;
	
	printf("%d, %d", a, b);
	while (n <= 20365011073)
	{
		n = a + b;
		printf(", %d", n);
		a=b;
		b=n;
		n++;
	}
	printf("\n");
	return (0);
}
