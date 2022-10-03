#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*_strdup - a function that returns a pointer to a
*	newly allocated space in memory, which contains a
*	copy of the string given as a parameter.
*@str: string parameter
*Return: pointer
*/

char *_strdup(char *str)
{
	char *cc;
	int i = 0;

	cc = malloc(sizeof(str));

	if (cc == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		*(cc + i) = *(str + i);
		i++;
	}
	return (cc);
}
