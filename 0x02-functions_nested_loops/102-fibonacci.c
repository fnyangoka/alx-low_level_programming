#include <stdio.h>
#include "main.h"
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		_putchar("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			_putchar("\n");
		else
			_putchar(", ");
	}

	return (0);
}
