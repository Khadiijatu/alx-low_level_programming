#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 from 0, using the putchar function
 *
 * Return: 0
 */

int main(void)
{
	int n;
	
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return(0);
}
