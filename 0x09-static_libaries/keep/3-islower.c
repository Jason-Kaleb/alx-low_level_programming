#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a letter is a lowercase letter
 * @c: letter input
 * Return: 1 if c = lowercase and 0 if else
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
