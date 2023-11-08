#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: input name
 * @f: pointer to a function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
if (f && name)
{
f(name);
}
}
