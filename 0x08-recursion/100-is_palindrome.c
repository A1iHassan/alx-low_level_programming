#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: a value of int
 */

int _strlen(char *s)
{
	int l = 1;

	if (*s != '\0')
	{
		l += _strlen(s + 1);
	}
	return (l);
}

/**
 * s_palindrome - check if a string is a plaindrome
 * @s: a given string
 * Return: a value of type int
 */

int is_palindrome(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (1);
	}
	i = _strlen(s) - 1;

	if (*s != s[i - 1])
	{
		return (0);
	}

	return (is_palindrome(s + 1));
}
