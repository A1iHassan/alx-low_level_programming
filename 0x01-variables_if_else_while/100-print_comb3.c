#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */

int main(void)
{
	int a;
	int b = 49;

	for (a = 48; a < 57; a++)
	{
		if (a == b)
		{
			continue;
		}
		putchar(a);
		while (b <= 58)
		{
			putchar(b);
			++b;
		}
		if (a == 56 && b == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
