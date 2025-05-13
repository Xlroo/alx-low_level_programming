#include "main.h"
/**
 *_abs - print absolute value of an integer
 *@n: integer to check
 *
 *Return: absolute value of integer
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * -1);
}
