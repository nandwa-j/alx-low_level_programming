#include "main.h"
#include <stdio.h>
/**
 * main - prints a name of a program
 * @argc: arguement
 * @argv: pointer to array of arguements
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
