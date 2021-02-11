#include "holberton.h"
/**
 * _isupper - will check for uppercase
 * @c: the char that is checked
 * Return: 1 for uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
