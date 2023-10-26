#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = 'a', b = 'b';
	int i = b - a;

	printf("%lu  %d\n", sizeof(unsigned int), i);
	return (0);
}
