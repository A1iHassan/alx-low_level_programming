#include "main.h"

/**
 * rev_string - bla
 * @s: bla
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	int start = 0;
	int end = i - 1;

	while (start <= end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
