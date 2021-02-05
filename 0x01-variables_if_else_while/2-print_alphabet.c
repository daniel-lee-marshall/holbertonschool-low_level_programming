#include <stdio.h>
/**
 * main - loop that prints the alphabet a to z in lowercase
 *
 * Return: prints 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
