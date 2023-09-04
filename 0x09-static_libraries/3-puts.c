#include "main.h"
/**
 * _puts - a function that prints a string to stdout.
 * @str: The string be printed.
 * _putchar prints a new line.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
