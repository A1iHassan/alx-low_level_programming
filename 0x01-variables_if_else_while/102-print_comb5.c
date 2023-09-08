#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla
 * Return: bla
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 57; b++)
		{
			for (c = a; c < 58; c++)
			{
				for (d = b + 1; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
