#include "holberton.h"
/**
 * print_last_digit - Shows the last digit
 * @n: to find the last digit
 * Return: the last digit.
 */
int print_last_digit(int)
{
	if (n < 0)
		n = n * -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}
