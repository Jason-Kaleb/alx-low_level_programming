#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: integer to output
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 97)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
