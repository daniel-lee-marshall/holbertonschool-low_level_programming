#include "holberton.h"
/**
 * print_last_digit - will print the last digit of a number.
 * @n: to find the last place.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
