#include "main.h"

void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
