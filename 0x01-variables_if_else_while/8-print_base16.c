#include <stdio.h>
/**
 * main - Prints hexadecimal 0-9 then a-f
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
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
