#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_array - function that prints n elements of an
* an array
* @a: the array to print from
* @n: number of elements to print
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
