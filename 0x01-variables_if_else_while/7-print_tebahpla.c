#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		--x;
	}
	putchar('\n');
	return (0);
}
