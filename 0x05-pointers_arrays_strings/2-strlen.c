#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: first char pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
