#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument counts
 * @argv: arguments array
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
