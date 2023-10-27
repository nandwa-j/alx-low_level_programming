#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguements it recieves
 * @argc: arguements
 * @argv: pointer to arguement
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
return (0);
}
}
