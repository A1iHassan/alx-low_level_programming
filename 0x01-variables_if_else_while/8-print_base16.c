#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla
 * Return: bla
 */

int main(void)
{
	char a = '0';
	char b = 'a';

	while (a <= '9')
	{
		putchar(a);
		++a;
	}
	while (b <= 'f')
	{
		putchar(b);
		++b;
	}
	putchar('\n');
	return (0);
}
