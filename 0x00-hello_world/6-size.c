#include <stdio.h>
/**
* main - Entry points
* Return: Success (0)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)",sizeof(char));
	printf("Size of an int: %d byte(s)",sizeof(int));
  	printf("Size of a long int: %d byte(s)",sizeof(long int));
  	printf("Size of a long long: %d byte(s)",sizeof(long long));
	printf("Size of a float: %d byte(s)",sizeof(float));
	return (0);
}