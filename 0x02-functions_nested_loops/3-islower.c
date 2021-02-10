#include "holberton.h"
/**
 * _islower - checks to see if a char is lowercase.
 * Return: will return 1 if it is lowercase and return 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
