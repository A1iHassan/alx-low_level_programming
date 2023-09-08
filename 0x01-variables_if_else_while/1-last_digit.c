#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry
 * Describtion: bla bla
 * Return: bla bla
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("last digit of %d is %d and is 0\n", n, i);
	else if (i < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}
