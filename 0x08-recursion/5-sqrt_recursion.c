#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_sqrt_recursion - function that returns the natural square root of a number.
*@n: The numbers
*Return: the Square root
*/


int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		while (i++ < n)
		{
			if (i * i == n)
				return (i);
		}
		return (-1);
	}
	return (1);

}

