#include "main.h"

/**
 * rev_string - bla
 * @s: bla
 */

void rev_string(char *s)
{
	char *rev;
	int i = 0;
	int j;

	rev = "hi";

	while (s[i])
	{
		i++;
	}

	j = i;

	while (i--)
	{
		rev[j - i] = s[i];
	}
	s = rev;
}
