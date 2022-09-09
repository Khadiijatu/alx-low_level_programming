#include <stdlib.h>                                                                                                                   
#include <time.h>                                                                                                                     
#include <stdio>

/**                                                                                                                                   
 * main - Print the alphabet in lower case
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return(0);
}
