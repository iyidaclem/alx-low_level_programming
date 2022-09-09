#include <stdio.h>

/**
*main - Entry point
*Description: prints numbers from 0-9
*followed by new line
*Return: Success (0)
*/

int main(void)
{
	for (int i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
