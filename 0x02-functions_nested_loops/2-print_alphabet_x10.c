#include "holberton.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet a-z then times.
 * Return: Doesn't return anything.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
