#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string to evaluate
 * @src: appends to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
