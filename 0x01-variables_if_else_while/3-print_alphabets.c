#include <stdio.h>

/**
 *main - Entry
 *Describtion: bla bla
 *Return: bla bla
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		++x;
	}
	while (y <= 'Z')
	{
		putchar(y);
		++y;
	}
	putchar('\n');
	return (0);
}
