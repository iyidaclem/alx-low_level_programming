#include "main.h"

/**
* print_last_digit - function name
*
* Description: a function that prints the last digit of a number.
*
* a given input
*
* @n: number to convert
* Return: unsigned int;
*/

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		return (l * -1);
	else
		return (l);
}
