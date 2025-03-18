#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int i;
	int x;

	for (i = 0; i < 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			putchar(i + '0');
			putchar(x + '0');
			if (!(i == 8 && x == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

