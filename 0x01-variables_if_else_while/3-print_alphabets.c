#include <stdio.h>

/**
 * main - prints alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	char CH;

	for (CH = 'A'; CH = 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
