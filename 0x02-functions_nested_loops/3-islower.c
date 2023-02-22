#include "main.h"
#include <ctype.h>
/*
 * _islower - checks for lowercase character
 *
 * Return: always 0 = success
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
