#include "holberton.h"
/**
 * _isalpha - Tests if character is from alphabet, upper or lowercase.
 * @c: char that is tested
 * Return: prints 1 if it is a char 'a-z' or 'A-Z'; 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
