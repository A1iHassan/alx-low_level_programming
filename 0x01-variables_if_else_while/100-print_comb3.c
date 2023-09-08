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

	for (a = 47; a < 57; a++)
	{
		for (b = 48; b < 58; b++)
		{
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
