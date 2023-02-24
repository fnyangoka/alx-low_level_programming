#include "main.h"
/**
 *_isupper -  checks for uppercase character
 * @c: character to be checked
 * Return: 1 if c is uppercase, otherwise returns 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
	}

	return (1);
}
