#include <stdlib.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: s1
 * @s2: s2
 * Return: 1 - 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			j = 1;
			break;
		}
		if (s1[i] < s2[i])
		{
			j = -1;
			break;
		}
		i++;
	}
	return (j);
}

/**
 * strtow - splits a given string into its words
 * @str: a given string
 * Return: a value of type char **
 */

char **strtow(char *str)
{
	int l, i = 0, k = 0, m = 0, n = 1;
	char **a;
	if (_strcmp(str, "") || _strcmp(str, " "))
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
			i++;
		str++;
	}
	i++;
	a = malloc(sizeof(char *) * i + sizeof(char *));
	if (a == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			if (*(str + 1) != ' ')
			{
				a[k] = malloc(sizeof(char) * n);
				if (a[k] == NULL)
				{
					for (l = 0; l < k; l++)
						free(a[l]);
					free(a);
				}
				for (l = 0; l < n; l++)
				{
					a[k][l] = str[m];
					m++;
				}
				a[k][l] = '\0';
				k++;
				m++;
				n = -1;
			}
		}
		str++;
		n++;
	}
	return (a);
}
