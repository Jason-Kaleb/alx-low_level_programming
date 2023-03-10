#include "main.h"

/**
 * *_strncat - concatenates two strings
 * descripition: concatenates two string given number of bytes
 * @dest: first string to evaluate
 * @src: second string to append to the first string
 * @n: bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
