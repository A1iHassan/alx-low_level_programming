#include "main.h"

/**
 * jack_bauer - bla
 * Describtion: bla
 * Return: bla
 */

void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = '0'; a < '3'; a++)
	{
		for (b = '0'; b < '4'; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	return (0);
}
