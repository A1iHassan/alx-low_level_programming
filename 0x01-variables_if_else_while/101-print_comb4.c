#include <stdio.h>

/**
 * main - Entry
 * Describtion: blaaaa
 * Return: bla bla
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
