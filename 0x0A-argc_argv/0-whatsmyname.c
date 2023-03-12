#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * description: this function prints the name given
 * by any user
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 =success always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
