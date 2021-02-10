#include "holberton.h"
/**
 * print_last_digit - finds and prints the last digit of a number
 * @n: the number to be checked
 * Return: prints the last digit of the number.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	{
	_putchar((n % 10) + '0');
	return (n % 10);
	}
}
