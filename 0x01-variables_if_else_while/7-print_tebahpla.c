#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char las;

	for (las = 'z'; las >= 'a'; las--)
		putchar(las);

	putchar('\n');
	return (0);
}
