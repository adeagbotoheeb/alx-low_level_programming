#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: Always 0 (success)
 *
 */
void main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');

	return (0);
}
