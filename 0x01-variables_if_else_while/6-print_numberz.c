#include <stdio.h>
/**
 * main - Prints 0 through 9 with putchar
 * Return: prints 0
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
