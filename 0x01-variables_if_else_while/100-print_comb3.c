#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int first_digit = x % 10;
			int second_digit = y % 10;

			if (first_digit != second_digi)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');

				if (x != 9 && y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
