#include "main.h"

int length(char *s);
int is_pal_recursion(char *s, int first_ind, int last_ind);

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: char pointer
 *
 * Return: 1 if s is a palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (is_pal_recursion(s, 0, length(s) - 1));
}

/**
 * length - Returns the length of a string
 * @s: char pointer
 *
 * Return: length of s
 */

int length(char *s)
{
	if (*s)
	{
		return (1 + (length(++s)));
	}
	else
	{
		return (0);
	}
}

/**
 * is_pal_recursion - Check if a string is a palindrome
 * @s: char pointer
 * @first_ind: int
 * @last_ind: int
 *
 * Return: 1 if s is a palindrome and 0 otherwise
 */

int is_pal_recursion(char *s, int first_ind, int last_ind)
{
	if (first_ind >= last_ind)
		return (1);
	if (s[first_ind] != s[last_ind])
		return (0);
	return (is_pal_recursion(s, first_ind + 1, last_ind - 1));
}
