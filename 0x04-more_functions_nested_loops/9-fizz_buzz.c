#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints the numbers from 1 to 100
 * replacing multiples of 3 with Fizz
 * multiples of 5 with Buzz, and multiple of both with BuzzFizz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
		else
		{
			printf("%d ", i);
		}
}
