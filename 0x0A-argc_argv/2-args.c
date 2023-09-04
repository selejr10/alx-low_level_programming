#include <stdio.h>
#include "main.h"

/**
 * main - program prints all arguments it receives
 * @argc: argument numbers
 * @argv: argument arrays
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
