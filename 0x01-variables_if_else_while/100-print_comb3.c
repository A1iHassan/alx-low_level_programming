#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */

int main(void)
{
	int a = 48;
	int b = 49;

	while (a < 57)
	{
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
			++b;
		}
		++a;
	}
	putchar('\n');
	return (0);
}
