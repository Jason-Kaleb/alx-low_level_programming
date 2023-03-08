#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of the string
 * @s: string to be evaluated
 * Return: s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	
	return(_strlen_recursion(s + 1) + 1);
}

int main(void)
{
	int n;

	n = _strlen_recursion("You must'nt be afraid to dream a little bigger, darling.");
	printf("%d\n", n);

	return (0);
}
