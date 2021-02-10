#include "holberton.h"
/**
 * _abs - Prints absolute value of an integer.
 * @i: the int tested
 * Return: returns the absolute value of int
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
