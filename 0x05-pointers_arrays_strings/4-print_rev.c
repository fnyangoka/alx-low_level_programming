#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int n;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (n = len; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
