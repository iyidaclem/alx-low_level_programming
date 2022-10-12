#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
*op_add - calculate the sum of two integers  a and b
*@a: first integer
*@b: second integer
*Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
*op_sub- calculate the difference of two integers  a and b
*@a: first integer
*@b: second integer
*Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - calculate the product of two integers  a and b
*@a: first integer
*@b: second integer
*Return: the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div- calculate the sum of qoutient integers  a and b
*@a: first integer
*@b: second integer
*Return: the qoutient of a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}


/**
*op_mod - alculate the modulus of two integers  a and b
*@a: first integer
*@b: second integer
*Return: the modulus of a and b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
