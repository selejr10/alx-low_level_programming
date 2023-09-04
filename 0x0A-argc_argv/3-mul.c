#include <stdio.h>
#include "main.h"

/**
 * _atoi - program converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int p, d, n, len, r, digit;

	p = 0;
	d = 0;
	n = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (p < len && r == 0)
	{
		if (s[p] == '-')
			++d;

		if (s[p] >= '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			r = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			r = 0;
		}
		p++;
	}
	if (r == 0)

		return (0);
	return (n);
}

/**
 * main - program multiplies two numbers
 * @argc: argument numbers
 * @argv: argument arrays
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
