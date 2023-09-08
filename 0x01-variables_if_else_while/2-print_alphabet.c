#include <stdio.h>

/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */

int main(void)
{
	char s = "\n";
	int i;
	char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
		putchar(arr[i]);
	putchar(s);
	return (0);
}
