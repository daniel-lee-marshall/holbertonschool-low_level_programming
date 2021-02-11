#include "holberton.h"
/**
 * _isdigit - checks to see if digit
 * @c: the number that is tested
 * Return: 1 if digit; 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
