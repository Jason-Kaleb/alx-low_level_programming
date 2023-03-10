#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if c is a letter,lowercase or uppercase
 * @c: letter input
 * Return: 1 if c = letter,lowercase/uppercase
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
