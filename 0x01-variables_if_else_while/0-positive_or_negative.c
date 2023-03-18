#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Check if number is positive or negative'
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is greater than zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is less than zero\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
