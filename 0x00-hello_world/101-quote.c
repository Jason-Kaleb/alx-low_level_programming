#include <stdio.h>
#include <unistd.h>
/**
 * main - main function of the program
 *
 * Return: we are returning 1 for this program
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
