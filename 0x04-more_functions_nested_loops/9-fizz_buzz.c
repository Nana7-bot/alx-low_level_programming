#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: 0 if compiled well
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" Fizz");
		} else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" Buzz");
		} else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (j == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
