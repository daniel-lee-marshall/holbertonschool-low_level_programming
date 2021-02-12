#include <stdio.h>
/**
 * main - Prints 1 -100;
 * multiples of 3 prints fizz;
 * multiples of 5 prints buzz;
 * multiples of both 3 and 5 prints fizzbuzz.
* Return: 0 when correct
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
