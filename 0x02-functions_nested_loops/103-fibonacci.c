#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints sum of Even
 * fibronacci numbers less than 4000000
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		sum += k;
		j = k - j;
		++i;
	}
	printf("%d\n", sum);
	return (0);
}
