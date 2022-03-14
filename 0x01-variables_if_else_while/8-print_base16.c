#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = '0';
	char a = 'a';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
