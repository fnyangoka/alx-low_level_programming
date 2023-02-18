#include <stdio.h>
/**
 * main - prints single digits in base 10
 * Return: 0
 */
int main(void)
{
	int sa;

	for (sa = 0; sa < 10; sa++)
		putchar((sa % 10) + '0');

	putchar('\n');
	return (0);
}
