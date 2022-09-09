#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry Point
*Description: Generates random number everytime and print
*the number is negative, postive or zero
*Return: Success always (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive");
	else if (n == 0)
		printf("%d is zero");
	else
		printf("%d is negative");
	return (0);
}
