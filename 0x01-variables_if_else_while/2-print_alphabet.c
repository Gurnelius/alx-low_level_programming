#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints characters from a to z
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}

	putchar('\n');
	return (0);
}
