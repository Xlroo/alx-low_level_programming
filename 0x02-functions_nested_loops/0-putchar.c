#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	int n;
	char *s;
	int i;

	s = "_putchar";
	n = strlen(s);
	i = 0;

	while (i <= n)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
