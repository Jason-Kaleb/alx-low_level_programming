#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed into it
 * @argc: argument count
 * @argv: argument vector
 * (void)argv: unused variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));

	(void)argv;
	return (0);
}
