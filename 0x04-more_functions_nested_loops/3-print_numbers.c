#include "holberton.h"
/**
 * print_numbers - will print 0-9 with a new line
 * Return: void
 */
void print_numbers(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
