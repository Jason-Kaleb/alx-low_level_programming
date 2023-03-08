#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of the string
 * @s: string to be evaluated
 * Return: s
 */

int _strlen_recursion(char *s)
{
	/*if (*s == '\0')
	 *{
	 *	return (0);
	 *}
	 *_strlen_recursion(s + 1);
	 */

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}

	return (*s - 53);
}

/*int main(void)
 *{
 *	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);

	return (0);
}
*/
