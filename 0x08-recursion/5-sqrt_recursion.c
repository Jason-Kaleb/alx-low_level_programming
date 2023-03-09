#include "main.h"
#include <stdio.h>

/**
 * _sqrt - makes it possible for a sqrt
 * @a: first int = n
 * @b: total
 *
 * Return: _sqrt(a, b + 1)
 */

int _sqrt(int a, int b)
{
	if ((b * b) > a)
	{
		return (-1);
	}
	else if (a == (b * b))
	{
		return (b);
	}
	else
	{
		return (_sqrt(a, b + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: int to be evaluated
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}

	return (_sqrt(n, 1));
}

int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);

	return (0);
}
