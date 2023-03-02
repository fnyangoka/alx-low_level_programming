#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f;
	int e;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
	dest[f] = src[e];
	f++;
	e++;
	}
	dest[f] = '\0';
	return (dest);
}

