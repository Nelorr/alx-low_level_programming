#include <stdio.h>

/**
 * main - prints the numbers 1 - 100 followed by a new line
 * but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && 1 % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d");
		}
	}
	printf("\n");
	return (0);
}
