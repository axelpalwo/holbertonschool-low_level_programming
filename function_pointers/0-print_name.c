#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: String with a Name
 * @f: Function that formats the message
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
