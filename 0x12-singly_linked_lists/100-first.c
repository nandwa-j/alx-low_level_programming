#include <stdio.h>
/**
 * premain - prints a string before the main function is executed
 */
void__attribute__((constructor)) premain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n")
}
