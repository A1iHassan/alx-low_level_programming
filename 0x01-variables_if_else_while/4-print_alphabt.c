#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
		{
			++x;
			continue;
		}
		putchar(x);
		++x;
	}
	putchar('\n');
	return (0);
}
