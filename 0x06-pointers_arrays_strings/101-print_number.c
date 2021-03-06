#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Nothing
 */
void print_number(int n)

{
	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);

	}

}
