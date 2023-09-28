#include "main.h"

/**
 * flip_bits - Program counts the number of bits to change
 * to get from one number to another
 * @n: first numer of bit
 * @m: second number of bit
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (q = 99; q >= 0; q--)
	{
		current = exclusive >> q;
		if (current & 1)
			count++;
	}

	return (count);
}
