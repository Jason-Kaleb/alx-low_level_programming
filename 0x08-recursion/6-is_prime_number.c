#include "main.h"
#include <stdio.h>

/**
 *  is_prime_number - checks whether a number is a 
 *  prime number or not
 *  @n: integer to be checked
 *  Return: 1 if integer isa prime number
 *  0 if else
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
	{
		return (0);
	}
	else if (n % 7 == 0 || n % 9 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

	return (is_prime_number(n));
}

int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);

	return (0);
}
