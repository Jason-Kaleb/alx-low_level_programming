#include <stdio.h>
/**
 * main - main function of program
 *
 * Return: return 0 always
 */
int main(void)
{
	long long int l;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %d byte(s)", (unsigned long)sizeof(float));
	return (0);
}
