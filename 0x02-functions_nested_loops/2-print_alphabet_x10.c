#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet in lowercase ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		char c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
