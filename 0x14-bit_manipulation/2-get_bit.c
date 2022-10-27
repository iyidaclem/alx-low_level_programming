#include "main.h"

/**
*count_bit - function to get number of binary bit
*in a number
*@n: the number
*@init: init number of bits which is 0 by default
*Return: number of bits
*/

unsigned int count_bit(unsigned long int n, unsigned int init)
{
	unsigned long int dnum, _init;

	_init = init;
	dnum = n >> 1;
	if (dnum > 0)
	{
		return (_init + count_bit(dnum, _init + 1));
	}
	return (_init + 1);
}

/**
*_get_bit - function to get a bit at a given index
*@n: the number
*@index: index of the bit
*@counter: conter to detect the index
*Return: a bit (0 or 1)
*/

int _get_bit(unsigned long int n, unsigned int index, unsigned int counter)
{
	unsigned long int num, dnum;

	num = n;
	dnum = n >> 1;
	if (dnum > 0 && counter < index)
	{
		return (_get_bit(dnum, index, counter + 1));
	}
	if (index > counter)
		return (-1);
	return (num - (2 * dnum));
}

/**
*get_bit - calls _get_bit
*@n: the number
*@index: index of the bit
*Return: returns the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if(n == 0)
		return (0);
	return (_get_bit(n, index, 0));
}
