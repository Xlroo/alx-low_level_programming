#include "main.h"

/**
 * _puts_recursion - main function 
 * 
 * @s : function parameter
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
	_putchar(*s);
	_puts_recursions(s + 1);
	}
	else
	_putchar('\n');
}
