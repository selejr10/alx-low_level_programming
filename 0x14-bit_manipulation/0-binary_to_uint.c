#include "main.h"

/**
 * binary_string_to_uint - It converts a binary string to an unsigned int.
 * @binaryString: A string containing the binary number.
 *
 * Return: The converted number or 0 if invalid input is detected.
 */
unsigned int binary_string_to_uint(const char *binaryString)
{
	int f;
	unsigned int decimalValue = 0;

	if (!binaryString)
		return (0);

	for (f = 0; binaryString[f]; f++)
	{
		if (binaryString[f] < '0' || binaryString[f] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (binaryString[f] - '0');
	}

	return (decimalValue);
}
