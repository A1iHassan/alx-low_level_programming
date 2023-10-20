#include <stdio.h>

/**
 * pre_main - prints some content
 */

void pre_main(void)
{
	char *a = "You're beat! and yet, you must allow,\n";

	printf("%sI bore my house upon my back!\n", a);
}

/**
 * run_pre_main - calls functions before main function
 */

__attribute__((constructor))
void run_pre_main(void)
{
	pre_main_function();
}
