#include "main.h"
/**
 * _strncat - a function that links two strings
 * using at most n bytes from src
 * @dest: value entered
 * @src: value entered
 * @n: value entered
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int o;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[p] = src[o];
		p++;
		o++;
	}
	dest[p] = '\0';
	return (dest);
}
