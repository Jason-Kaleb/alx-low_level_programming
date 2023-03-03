#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first int
 * @n: second int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int z, st_arr, end_arr;

	z = n - 1;
	for (; b < n / 2; b++)
	{
		sta_arr = a[b];
		end_arr = a[z];
		a[b] = end_arr;
		a[z] = st_arr;
		z--;
	}
}
