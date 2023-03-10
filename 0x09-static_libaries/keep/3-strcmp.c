#include "main.h"
#include <stdio.h>

/**
 * _strcmp - takes two strings and compares them
 * @s1: first string to evaluate
 * @s2: second string to be checked against string 1
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}

	return (0);
}
