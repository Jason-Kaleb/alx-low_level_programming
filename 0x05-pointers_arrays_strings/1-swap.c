#include "main.h"

/**
 * swap_int - funtion that swaps the values of two integers
 * @a: first pointer integer
 * @b: second pointer integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
