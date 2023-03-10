#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: char
 * @n: bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}

	return (s);
}
