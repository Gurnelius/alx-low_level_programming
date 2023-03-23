#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - prints strings followed by a new line.
  *@separator: string to be printed between strings.
  *@n: number of strings.
  *
  *Return: void.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
