#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _atoi - convert string to integer
*@s: string to convert
* Return: Integer
*/

int _atoi(char *s)
{
	int i, k, l, t;
	char last_sign = 'd';

	t = 0;
	k = 0;
	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			t *= 10;
			t += *(s + i) - '0';
		}
	else if (t != 0 && k == 1)
	{
		break;
	}
	else
	{
		last_sign = *(s + i);
		if (last_sign == '-')
		{
			k = 1;
		}
	}
	}
	return (last_sign == '-' ? (t * -1) : t);
}
