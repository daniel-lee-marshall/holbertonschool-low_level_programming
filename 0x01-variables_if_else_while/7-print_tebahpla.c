#include <stdio.h>
/**
 * main - Prints the alphabet in reverse order
 * Return: Prints 0
*/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
