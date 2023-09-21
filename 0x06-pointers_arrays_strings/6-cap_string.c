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
		if (x[i] == 32)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 9)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 10)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 44)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 59)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 46)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 33)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 63)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 34)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 40)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 41)
		{
			if (x[i + 1] > 96 && x[i + 1] < 122)
				x[i + 1] -= 32;
		} else if (x[i] == 123)
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
