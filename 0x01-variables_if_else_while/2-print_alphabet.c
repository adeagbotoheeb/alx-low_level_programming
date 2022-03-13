#include <stdio.h>

/**
 * main - Entry point
 * none
 * return: Always 0 (success)
 */

void main(void)
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
