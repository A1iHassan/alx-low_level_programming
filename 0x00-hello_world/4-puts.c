#include <stdio.h>
int main()
{
	const char str = '"';
	const char str2[100] = "Programming is like building a multilingual puzzle";
	const char str3[200] = str + str2;
	puts(str3);
	return 0;
}
