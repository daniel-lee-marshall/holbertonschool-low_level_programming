#include "holberton.h"
/**
 * print_sign - tests if int is +,-, or 0
 * @n: the number that is checked
 * Return: 1 for +, 0 for zero, and -1 for -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
