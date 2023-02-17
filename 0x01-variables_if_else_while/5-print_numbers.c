#include <stdio.h>

/**
*main - Print numbers from 0 t0 9
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = 0;
	while( a < 10 )
	{
		printf("%d", a++);
	}
	printf("\n");
}
