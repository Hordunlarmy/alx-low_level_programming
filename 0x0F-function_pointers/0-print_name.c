#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry point
 * @name: string to be printed
 * @f: pointer to function
 * Return: a name.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
