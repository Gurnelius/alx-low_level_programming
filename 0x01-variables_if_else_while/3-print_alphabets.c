#include <stdio.h>
/**
 * main -Entry Point
 *
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return:0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c++);
	}

	putchar('\n');
	return (0);
}
