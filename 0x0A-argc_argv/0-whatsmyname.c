#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (**(argv + i) == '.' && *(*(arg + i) + 1) == '/')
			printf("%s\n", *(argv + i));
	}
	exit(EXIT_SUCCESS);
}
