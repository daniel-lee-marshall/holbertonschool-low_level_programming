#include <stdio.h>
/**
 * main - Prints every alphabet letter but the letter q and e
 * Return: prints 0
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
