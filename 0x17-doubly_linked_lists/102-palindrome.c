#include <stdio.h>

/**
 * is_palindrome - check if palindrome
 *
 * @n: number to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(int n)
{
	int original = n;
	int reversed = 0;

	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return original == reversed;
}

int main()
{
	int largest_palindrome = 0;
	int i, j, product;
	FILE *file;

	for (i = 100; i < 1000; ++i)
	{
		for (j = 100; j < 1000; ++j)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
				largest_palindrome = product;
		}
	}

	file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}
	return 0;
}
