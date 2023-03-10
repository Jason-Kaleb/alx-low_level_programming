#include "main.h"
#include <stdio.h>

/**
 * _len - checks length of string
 * @s: string to be checked
 * Return: result
 */

int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_len(s + 1) + 1);
}

/**
 * _palindrome - checks whether a string is a
 * palindrome or not
 * @s: string to be checked
 * @a: to iterate
 * @b: to iterate
 * Return: 1 if string is a palindrome
 * 0 if else
 */

int _palindrome(char *s, int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (s[a] != s[b])
	{
		return (0);
	}
	if (a < b + 1)
	{
		return (_palindrome(s, a + 1, b - 1));
	}

	return (1);
}

/**
 * is_palindrome - checks whether a string is a
 * palindrome or not
 * @s: string ot be evaluated
 * Return: 1 if string is palindrome
 * 0 if else
 */

int is_palindrome(char *s)
{
	int a = _len(s);

	if (a == 0)
	{
		return (1);
	}

	return (_palindrome(s, 0, a - 1));
}
