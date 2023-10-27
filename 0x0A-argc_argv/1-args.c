#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguements passed to it
 * @argc: arguements
 * @argv: pointer to arguements
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
