#include "main.h"

/**
 * str_length - looks for length
 * @s: a pointer to an string
 * Return: always success
 */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_length(s + 1));
}

/**
 * is_palindrome_helper - a helper function
 * @s: a pointer
 * @start: a variable
 * @end: an end variable
 * Return: always success
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - a palindrome
 * @s: a pointer
 * Return: always success
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, length - 1));
}
