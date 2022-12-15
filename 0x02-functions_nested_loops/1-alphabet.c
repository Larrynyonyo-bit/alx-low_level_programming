#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints the alphabet, in lowercase, followed by a newline
 * Return: Always Return Success
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{

		_putchar(c);
		c++;
	}

	_putchar('\n');
}

