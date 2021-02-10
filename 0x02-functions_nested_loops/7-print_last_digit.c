#include "holberton.h"
/**
 * print_last_digit - finds and prints the last digit of a number
 * @number: the number to be checked
 * Return: prints the last digit of the number
 */
int print_last_digit(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}
}
