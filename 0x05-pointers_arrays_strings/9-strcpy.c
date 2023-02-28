#include "main.h"

/**
 * *_strcpy - copies a string and prints it
 * @dest: first char to be evaluated
 * @src: where string will be pointed to
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
