#include <stdio.h>

/**
 * main - Entry point
 * none
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
