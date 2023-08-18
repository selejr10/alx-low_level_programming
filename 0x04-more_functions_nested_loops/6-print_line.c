#include "main.h"

/**
 * print_line - draws a straight line using the character _ n times
 * @n: The number of times to print the character _
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
