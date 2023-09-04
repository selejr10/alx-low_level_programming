#include "main.h"
/**
 * _memcpy - a program that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int d = n;

	for (; a < d; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
