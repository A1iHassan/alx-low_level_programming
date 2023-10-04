#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a given string into its words
 * @str: a given string
 * Return: a value of type char **
 */

char **strtow(char *str)
{
	int i = 0;
	int k = 0;
	int l;
	int m = 0;
	int n = 1;
	char **a;

	if (str == NULL)
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
