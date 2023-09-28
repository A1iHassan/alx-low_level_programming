#include "main.h"

/**
 * s_palindrome - check if a string is a plaindrome
 * @s: a given string
 * Return: a value of type int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return 1;
	}

	if (*s != s[strlen(s) - 1])
	{
		return 0;
	}

	return is_palindrome(s + 1);
}
