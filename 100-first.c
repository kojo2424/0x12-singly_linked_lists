#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentence before the main
 * functon is executed
 */
void first(void)
{
printf("You're best! and yet, you must allow,\n");
printf("I bore my house upon ny back!\n");
}
