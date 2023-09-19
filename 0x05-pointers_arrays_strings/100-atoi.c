#include "main.h"
#include <stdbool.h>

/**
 * _atoi - bla
 * @s: bla
 * Return: bla
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int result;
	bool sign = true;
	char *num;

	num = "B";

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = !sign;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num[j] = s[i];
			j++;
			i++;
		} else
		{
			return (0);
		}
	}

	result = (int)*num;

	if (sign == true)
		result = -result;
	return (result);
}
