#include <stdio.h>

/**
 * main- entry point & print alphabetic lower case
 *
 *  Return: Always return 0 & (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

