#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a newline
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
