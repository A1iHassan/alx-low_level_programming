#include "main.h"

/**
 * cap_string - bla
 * @x: bla
 * Return: bla
 */

char *cap_string(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] == 32 || (x[i] == 9))
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 10 || x[i] == 44)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 59 || x[i] == 46)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 33 || x[i] == 63)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 34 || x[i] == 40)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 41 || x[i] == 123)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 125)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		}
		i++;
	}
	return (x);
}
