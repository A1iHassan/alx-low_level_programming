#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla
 * Return: bla
 */

int main(void)
{
	int x = 48;

	while(x < 58)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		++x;
	}
	putchar('\n');
	return (0);
}
