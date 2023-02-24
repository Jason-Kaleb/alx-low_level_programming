#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 0-100
 * but multiples of 3 prints fizz
 * mulitiples of 5 prints buzz
 * multiples of both prints fizzbuzz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", a);
		}
		if (a != 100)
		{
			printf(" ");
		}

	}
	printf("\n");

	return (0);
}
