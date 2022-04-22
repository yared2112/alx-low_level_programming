#include <stdio.h>

/**
 * __attribute__ - constructor first prints that printf
 *
 **/
void __attribute__((constructor))
calledFirst()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
