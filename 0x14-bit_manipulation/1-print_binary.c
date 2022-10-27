#include "main.h"

/**
*print_binary - function to covert number to base2
*@n: the number to convert
*Return: void
*/


void print_binary(unsigned long int n)
{
	unsigned long int num, dnum;

	num = n;
	dnum = n >> 1;
	if (dnum > 0)
	{
		print_binary(dnum);
	}
	printf("%lu", (num - (2 * dnum)));
}

