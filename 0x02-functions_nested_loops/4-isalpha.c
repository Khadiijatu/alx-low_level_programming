#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: int
 *
 * Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return(1);
	else
		return(0);
}
