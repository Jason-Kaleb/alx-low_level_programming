#include <stdio.h>

/**
 * main - main function of program
 *
 * Return: return 0 always
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", (unsigned long)sizeof(float));
	return (0);
}
