#include <stdio.h>

/**
 * main - main function of program
 *
 * Return: return 0 always
 */
int main(void)
{
	long long int l;

	printf("Size of a char: %d bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %d bytes(s)", (unsigned long)sizeof(float));
	return (0);
}
