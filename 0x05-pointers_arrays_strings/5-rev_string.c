#include "main.h"

/**
 * rev_string - bla
 * @s: bla
 */

void rev_string(char *s)
{
	int i = 0;
	int start, end;

	while (s[i])
	{
		i++;
	}

	start = 0;
	end = i - 1;

	while (start <= end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
