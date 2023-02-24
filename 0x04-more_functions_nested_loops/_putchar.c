#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error return -1
 */
int _putchar(character c)
{
	return (write(1, &c, 1));
}
