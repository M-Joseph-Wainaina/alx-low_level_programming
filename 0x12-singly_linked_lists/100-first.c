#include <stdio.h>

void before_main() __attribute__((constructor));

/**
 * before_main  - this function is executed before main
 */

void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
