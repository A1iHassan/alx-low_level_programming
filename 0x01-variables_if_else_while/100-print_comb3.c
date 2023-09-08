#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = 49; b < 58; b++)
		{
			if ( a == b )
			{
				continue;
			}
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
